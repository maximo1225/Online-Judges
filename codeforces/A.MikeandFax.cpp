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
    string data;cin >> data;
	int value;cin >> value;

	int lenght = (int)data.size();
	int constant = lenght/value;
	if(lenght%value){
        cout << "NO" << endl;
        return 0;
	}

	for(int i = 0;i < lenght;i+=lenght/value){
        string clon = data.substr(i, lenght/value);
        string vclon = clon;
        cout << i << " " << lenght/value << endl;
        reverse(vclon.begin(), vclon.end());
        if(clon != vclon){
            cout << "NO" << endl;
            return 0;
        }
	}

	cout << "YES" << endl;
	return 0;
}
