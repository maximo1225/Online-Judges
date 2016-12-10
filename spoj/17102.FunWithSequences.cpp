#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int Bsearch(int*, int, int);
int main(int argc, char const *argv[])
{
	int n, m, valor;
	scanf("%d", &n);
	int s[n];

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &s[i]);
	}

	scanf("%d", &m);
	int q[m];

	for (int i = 0; i < m; ++i)
	{
		scanf("%d", &q[i]);
	}

	sort(s, s+n);
	sort(q, q+m);

	for (int i = 0; i < n; ++i)
	{
		valor = Bsearch(q, m, s[i]);
		if(valor == -1)
			printf("%d ", s[i]);
	}

	printf("\n");
	return 0;
}

int Bsearch(int a[], int n, int valor){
	int i = 0;
	int j = n;
	int mid, ans = -1;
	while(i <= j){
		mid = (i+j)/2;
		if (valor > a[mid])
			i = mid+1;

		else if(valor < a[mid])
			j = mid-1;

		else if (valor == a[mid]){
			ans=mid;
			j = mid-1;
		
		}
	}
	if(i >= n) return ans;
	else return ans;
}