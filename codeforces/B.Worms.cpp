#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, g;
	cin >> n;
	int lista[n+3];
	lista[0]=0;
	for (int i = 1; i <= n; i++)
	{
		cin >> lista[i];
		lista[i]+=lista[i-1];
	}
	lista[n+1]=9999999;
	cin >> g;
	
	for (int i = 0; i < g; i++)
	{
		int gi;
		cin >> gi;
		cout <<lower_bound(lista,lista+2+n,gi)-lista<< endl;
	}
	
	
	
	return 0;
}
