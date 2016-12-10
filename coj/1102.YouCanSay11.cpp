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
    string values;
    while(cin >> values){
        if(values == "0")break;
        int odd=0, even=0;
        for(int i=0;i<values.size();i+=2)
            even += values[i]-'0';
        for(int i=1;i<values.size();i+=2)
            odd += values[i]-'0';

        if(even > odd) swap(odd, even);
        if((odd-even)%11 == 0)
            cout << values << " is a multiple of 11" << endl;
        else cout << values << " is not a multiple of 11" << endl;
    }
	return 0;
}
