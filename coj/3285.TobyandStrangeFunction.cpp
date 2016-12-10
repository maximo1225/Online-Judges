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


//este codigo da timelimit
string move_string(ll n, string data){
    if(data.size() == n)return data;

    else if(n > data.size())
        (n%data.size() == 0)? n = data.size() : n %= data.size();
    string chain;
    chain += data.substr((data.size()-n), n);
    data.erase(data.size()-n, data.size()-1);
    chain.append(data);
    data = chain;
    return data;
}

int main(){
    int n;cin >> n;
    while(n--){
        ll value;cin >> value;
        string data;cin >> data;
        cout << move_string(value, data) << endl;
    }
	return 0;
}

