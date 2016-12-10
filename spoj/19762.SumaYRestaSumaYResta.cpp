#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, val, ans = 0, status = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &val);
		if(i>=2){
			if(status == 0){
				ans -= val;
				status = 1;
			}else{
				ans += val;
				status = 0;
			}
		}else
			ans += val;
	}
	printf("%d\n", ans);
	return 0;
}