#include <iostream>
#include <cstdio>

using namespace std;

int Bsearch(int*, int, int);
int main(int argc, char const *argv[])
{
	int n, nq, q;

	scanf("%d %d", &n, &nq);
	int a[n];

	for (int i = 0; i < n; ++i)
		scanf("%d", &a[i]);

	for (int i = 0; i < nq; ++i)
	{
		scanf("%d", &q);
		printf("%d \n", Bsearch(a, n, q));
	}

	return 0;
}

int Bsearch(int a[], int n, int valor){
	int i = 0;
	int j = n;
	int mid, ans = -1;
	while(i <= j){
		mid = (i+j)>>1;
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
