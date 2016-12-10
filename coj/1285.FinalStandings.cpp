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
#include <map>
 
#define inf (1 << 30)
#define INF (1 << 45LL)
#define pb push_back
#define mp make_pair

using namespace std;
 
typedef pair<int, int> pi;
typedef long long ll;


bool comparar(const pi & i, const pi & j){
		return i.second > j.second;
}


int main(){
	int n, id, m;
	scanf("%d", &n);
	
	vector<pi> lista;
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &id, &m);
		lista.pb(mp(id, m));
	}
		 
	stable_sort(lista.begin(), lista.end(), comparar);
	for (int i = 0; i < n; i++)
		printf("%d %d\n", lista[i].first, lista[i].second);
	
	return 0;
}


