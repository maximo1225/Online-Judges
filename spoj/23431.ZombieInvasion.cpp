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
	int n;
	cin >> n;
	
	while(n--){
		int lista[20];
		int numero = 0;
		for (int i = 0; i < 20; i++)
		{
			cin >> lista[i];
		}
		
		for (int i = n-1; i > 0; i--)
		{
			if(lista[i]%2 == 0 && i > 0){
				numero += lista[i]/2;
				lista[i] = 0;
			}else if(lista[i]%2 != 0 && i > 0){
				numero += lista[i]/2-1;
				lista[i] = 1;
			}else {
				lista[i] = numero;
				
			}
			
		}
		
		for (int i = 0; i < n; i++)
		{
			cout << lista[i] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}
