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

int burbuja(int*, int);

int main(){
	int p;
	cin >> p;
	
	while(p--){
		int numero, k[20];
		cin >> numero;
		for (int i = 0; i < 20; i++)
		{
			cin >> k[i];
		}
		
		cout << numero << " " << burbuja(k, 20) << endl;
	}
	
	return 0;
}


int burbuja(int arreglo[], int n){
	int aux, i, j, count = 0;
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if(arreglo[i] > arreglo[j]){
				aux = arreglo[i];
				arreglo[i] = arreglo[j];
				arreglo[j] = aux;
				count++;
			}
		}
		
	}
	return count;
}
