#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int t, n;
	scanf("%d", &t);
	
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		printf("%d",(((n+3)*2+3)*2+3)*2);
	}
	return 0;
	
}
