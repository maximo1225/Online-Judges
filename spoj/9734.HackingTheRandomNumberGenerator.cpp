#include <iostream> 
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
	int n, k, j, ans = 0;
	scanf("%d %d", &n, &k);
	int arr[n];
	sort(arr, arr+n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	j = n;
	for (int i = 0; i < n; ++i)
	{
		//for (int j = 0; j < n; ++j)
		//{
			if(k == arr[i]-arr[j]){
				ans++;
				j = n-1;
			}
		//}
	}
	printf("%d\n", ans);
	return 0;
}

