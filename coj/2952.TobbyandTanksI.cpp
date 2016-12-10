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


int main(){
	int n, q;
	ll w, k;
	
	while(cin >> n >> q){
	int tanks[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> tanks[i];
	}
	cin >> w >> k;
	for (int i = 0; i < n; i++){
		if(i == 0) w -= k;
		else if(w >= tanks[i] && w > 0) w -= tanks[i];
		if(w < tanks[i+1]) w -= w;
		if(w == 0){
			cout << i+1 << " " << k << endl;  
			break;
		}
		
	}
	}
	return 0;
}
