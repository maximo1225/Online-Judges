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
    ios::sync_with_stdio(false);
    int t;
    ll arr[57], mv = 0;
    arr[0] = 3;mv = 4;
    for(int i = 1;i < 57;i++){
        arr[i] = arr[i-1]+mv;
        mv = mv*2;
    }
    cin >> t;
    int p = t;

    while(t--){
        ll n;cin >> n;
        cout << "Case " << p-t << ": " << arr[n-1] << endl;
    }
	return 0;
}

