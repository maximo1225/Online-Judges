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

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;

int main(){
	while(true){
		int  n;cin >> n;
		if(n == 0) break;
		
		int list[n];
		for(int i=0;i<n;i++)
			cin >> list[i];
		sort(list, list+n);
		
		for(int i=0;i<n;i++){
			cout << list[i];
			if(i<n-1)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}
