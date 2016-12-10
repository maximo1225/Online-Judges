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
	
	int h, l, n;
	while(cin >> h >> l >> n){
		if(h == 0 && l == 0 && n == 0) break;
		
		int valores[n];
		double avg = 0.0;
		
		for (int i = 0; i < n; i++)
		{
			cin >> valores[i];
		}
		
		sort(valores, valores+n);
		
		
		for (int i = 0; i < n ; i++)
		{
			if(i>=l && i<n-h)
				avg += valores[i];
		}
		
		avg /= (n-h)-l;
		printf("%.6lf\n", avg);
	}
	return 0;
}
