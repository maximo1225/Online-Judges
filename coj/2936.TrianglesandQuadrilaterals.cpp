#include <iostream>
#include <cstdio>
using namespace std;

typedef long long ll;
int main() {
	ll n, m;
	while(scanf("%lld %lld", &n, &m) != EOF){
		printf("Triangles: %lld\n", ((n*(n-1))/2)*m+((m*(m-1))/2)*n);
		printf("Quadrilaterals: %lld\n\n", ((m*(m-1))/2)*((n*(n-1))/2));
	}
	return 0;
}
