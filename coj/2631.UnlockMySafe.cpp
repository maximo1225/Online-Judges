#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int pass[] = {1,12,213,2314,24513,312456,3412567,36712458};
	int t, n;scanf("%d", &t);
	
	while(t--){
		scanf("%d", &n);
		printf("%d\n", pass[n-1]);
	}
	return 0;
}
