#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	float ls, lb, dc;
	scanf("%f %f %f", &ls, &lb, &dc);
	printf("%.2f\n", ((ls*ls)-((lb*lb)+(3.14159265358979323846264*(dc*dc)/4))));
	return 0;
}