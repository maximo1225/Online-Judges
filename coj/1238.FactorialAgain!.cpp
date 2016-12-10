#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n;
	while(scanf("%d", &n)){
		long long ans = 0;
		int i = 1;
		int fact = 1;
		if(n == 0) break;
		while(n > 0){
			ans += (n%10)*fact;
			n /= 10;
			fact *= ++i;
			
		}
		printf("%lld\n", ans);
		
	}
	return 0;
}
