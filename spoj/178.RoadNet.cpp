#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	int t, n;
	int flag = 0;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int arreglo[n][n];
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				scanf("%d", &arreglo[i][j]);

		for (int i = 0; i < n-1; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				int flag = 0;
				for (int k = 0; k < n; ++k)
				{
					if(k != i && j != k && arreglo[i][k] + arreglo[k][j] == arreglo[i][j] ){
						flag = 1;
					     break;
					 }
				}
				if(flag == 0)
					printf("%d %d\n", i+1, j+1); 
			}
		}

	}
	return 0;
}