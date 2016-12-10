#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>

using namespace std;
int mcd(int, int);
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", __gcd(abs(a), abs(b)));
	return 0;
}

