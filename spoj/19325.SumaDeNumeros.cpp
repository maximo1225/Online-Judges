#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, val, ans = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &val);
		if(val%2 == 0)
			ans += val;
	}
	printf("%d\n", ans);
	return 0;
}