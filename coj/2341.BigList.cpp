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

typedef struct{
	string key;
	int value;
}pares;

int main(){
	int n, m;cin >> n >> m;
	pares lista[n];
	for(int i = 0; i < n; i++){
		cin >> lista[i].key;
		cin >> lista[i].value;
	}
	
	for(int i=0; i < m; i++){
		string key;int value=0;
		string key1, value1;
		bool flag = false;
		getline(cin, key1);
		for(int j=0; j<(int)key1.size();j++){
			if(key1[j] != ' ' && flag == false){
				key += key1[j];
			}
			else if(key1[j] == ' ') flag = true;
			else if(isdigit(key1[j]) && flag ==  true) 
				value1 += key1[j]; 
			
		}
		
		value = atoi(value1.c_str());
		for(int j=0;j<n;j++){
			if(lista[j].key == key){	
				if(lista[j].value == value){
					cout << "ok" << endl;
					break;
				}
				else{
					cout << "wrong" << endl;
					break;
				}
			}
			else {
				cout << "not found" << endl;
				break;
			}
		}
				
	}
	return 0;
}

