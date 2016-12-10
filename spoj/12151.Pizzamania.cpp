#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int Bsearch(int*, int, int);
int main(int argc, char const *argv[])
{
	int t, n, m, count = 0;
	scanf("%d", &t);

	for (int i = 0; i < t; ++i)
	{ 
		count=0;
		scanf("%d %d", &n, &m);
		int arreglo[n];
		for (int j = 0; j < n; ++j)
			scanf("%d", &arreglo[j]);

		sort(arreglo, arreglo+n);
		for (int k = 0; k < n; ++k)
		{
			int salida = Bsearch(arreglo, n, m-arreglo[k]);
			count += salida;
		}
		printf("%d\n", count/2);
		
	}
	return 0;
}

int Bsearch(int a[], int n, int valor){
	int i = 0;
	int j = n;
	int mid;
	while(i <= j){
		mid = (i+j)/2;
		if (valor > a[mid])
			i = mid+1;

		else if(valor < a[mid])
			j = mid-1;

		else if (valor == a[mid]){
			return 1;		
		}
	}
	return 0;
}