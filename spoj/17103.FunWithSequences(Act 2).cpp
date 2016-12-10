#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;


int main(int argc, char const *argv[])
{
	int n, m, count;
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


	for (int i = 0; i < n; ++i)
	{
		if(s[i] == q[i] && i <= n && i <= m){
			 printf("%d ", i+1);
		}
	}

	printf("\n");
	return 0;
}



