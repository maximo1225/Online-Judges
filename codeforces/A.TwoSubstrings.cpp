#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <set>
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

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;

int main(){
    string s;cin >> s;
    int a=s.find("AB");
    int b=s.find("BA",a+2);
    int c=s.find("BA");
    int d=s.find("AB",c+2);
    if((a != -1 && b != -1) || (c != -1 && d != -1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
