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

int main(){
	int a, b;
	while(scanf("%d %d", &a, &b) != EOF){
		int mayor = 0;
		for(int i=a;i<b;i++){
			int count = 0;
			count++; ll n = i;
			while(true){
				if(n == 1)break;
				if(n%2!=0) n = 3*n+1;
				else n >>= 1;
				count++;
			}
			if(mayor < count) mayor = count;
		}
		cout << a << " " << b << " " << mayor << endl;
	}
	return 0;
}


