#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

class SegmentTree {
private:
    vector<int> st;
    vector<int> a;
    int n;
    int left(int p) { return (p << 1); }
    int right(int p) { return (p << 1) + 1; }

    void initialize(int p, int L, int R) {
        if (L == R)
            st[p] = L;
        else {
            initialize(left(p), L, (L + R) / 2);
            initialize(right(p), (L + R) / 2 + 1, R);
            int p1 = st[left(p)];
            int p2 = st[right(p)];
            st[p] = (a[p1] <= a[p2]) ? p1: p2;
        }
    }

    int query(int p, int L, int R, int i, int j) {
        if (i > R || j < L) return -1;
        if (L >= i && R <= j) return st[p];

        int p1 = query(left(p), L, (L + R) / 2, i, j);
        int p2 = query(right(p), (L + R) / 2 + 1, R, i, j);

        if (p1 == -1) return p2;
        if (p2 == -1) return p1;
        return (a[p1] <= a[p2]) ? p1 : p2;
    }

    void update(int p, int L, int R, int i) {
        // Fill here
    }

public:
    SegmentTree(const vector<int> &A) {
        a = A;
        n = a.size();
        st.assign(4 * n, 0);
        initialize(1, 0, n - 1);
    }

    int query(int i, int j) {
        return query(1, 0, n - 1, i-1, j-1);
    }

    int update(int i, int val) {
        a[i] = val;
        update(1, 0, n - 1, i);
        return 0;
    }

    int valueAt(int i) {
        return a[i];
    }
};

int main(){
	vector<int> lista;
	int n, q, valor;scanf("%d", &n);
	for(int i = 0; i < n; i++){scanf("%d", &valor);lista.push_back(valor);}
	int l, r;
	scanf("%d", &q);
	SegmentTree * segment = new SegmentTree(lista);
	for(int i = 0; i < q; i++){
		scanf("%d %d", &l, &r);
		if(l > r) swap(r, l);
		printf("%d\n", segment->valueAt(segment->query(l, r)));
	}
	
	return 0;
}
