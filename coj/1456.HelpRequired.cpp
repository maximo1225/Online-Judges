#include <iostream>
#include <stack>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <cstring>
#include <string>
#include <sstream>
#include <map>
 
#define inf (1 << 30)
#define INF (1 << 45LL)
#define pb push_back
#define mp make_pair

using namespace std;
 
typedef pair<int, int> pi;
typedef long long ll;

const int MAXN = 1000001;
int v[MAXN];

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	
	sort(v, v+n);
	
	for (int i = 0; i < n; i += 2)
		if(v[i] != v[i+1]){
			cout << v[i] << endl;
			return 0; 
		}
	
	
	return 0;
	
}
