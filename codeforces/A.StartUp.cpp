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
    string name;cin >> name;
    string mirror ="WTYUIOAHXVM";
    bool status = false, name2[name.size()];
    string namerev;

    if(name.size() == 1){
        for(int i = 0;i< 11;i++){
            if(mirror[i] == name[0]){
                cout << "YES" << endl;
                status = true;
                break;
            }
        }
        if(status) return 0;
        cout << "NO" << endl;
        return 0;
    }

    for(int i = 0;i<name.size();i++){
        status = false;
        for(int j = 0;j< 11;j++){
            if(name[i] == mirror[j]){
                status = true;
                name2[i] = true;
            }
        }
        if(status == false) name2[i] = false;
    }

    int count = 0;
    for(int i = 0;i< name.size();i++){
        if(name2[i]) count++;
    }
    if(count != name.size()){
            cout << "NO" << endl;
            return 0;
    }
    else{
        reverse(name.begin(), name.end());
        namerev = name;
        reverse(name.begin(), name.end());
        if(name == namerev)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;

}
