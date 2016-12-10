#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int t, x1, x2, y1, y2, xs, ys;
	scanf("%d", &t);
	
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		if((xs=(x2-x1)) < 0) xs *= -1;
		if((ys=(y2-y1 )) < 0) ys *= -1;
		printf("%d\n", xs+ys);
	}
	
	
}
