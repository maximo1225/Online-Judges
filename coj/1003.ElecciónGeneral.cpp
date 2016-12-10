#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <stack>
#include <queue>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdio>

#define inf (1 << 30)
#define INF (1 << 45LL)
#define pb push_back
#define mp make_pair
#define REP(i, a, b) for (int i = int(a); i <= int(b); i++)
#define TRvi(c, it) for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) for (msi::iterator it = (c).begin(); it != (c).end(); it++)

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef set<int> si;
typedef map<string, int> msi;

bool cmp(ii x, ii y){return x.first > y.first;}

int main(){
    int t;cin >> t;
    while(t--){
        int n, m;cin >> n >> m;
        ii result[n]; int value;
        for(int i=0;i<n;i++)
            result[i].first = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin >> value;
                result[j].first += value;
                result[j].second = j;
            }
        }

        sort(result, result+n, cmp);
        cout << result[0].second+1 << endl;

    }
	return 0;
}
