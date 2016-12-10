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


bool repite(int n){
	int unit;
	int digito[10];
	for (int i = 0; i < 10; i++)
	{
		digito[i] = 0;
	}
	int i = 0;
	while(n > 0){
		unit = n%10;
		n /= 10;
		if(digito[unit] == 1){
			//ya este digito ha sido visto
			return true;
		}
		digito[unit] = 1;
	}	
	return false;
}

int main(){
	int n, m, a[5000];
	a[0] = 0;
	for (int i = 1; i <= 5000 ; i++)
	{
		a[i] = a[i-1];
		if(!repite(i)){
			a[i]++;
		}
	}
	
	while(cin >> n >> m){
		cout << a[m]-a[n-1] << endl;
	}
	
}
