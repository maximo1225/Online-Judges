#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int ispoweroftwo (unsigned int x)
{
 while (((x % 2) == 0) && x > 1) /* While x is even and > 1 */
   x /= 2;
 return (x == 1);
}

int main(int argc, char const *argv[])
{
	int n, count =0;
	scanf("%d", &n);
	for (int i = 1; i < pow(2, n); ++i)
	{
		if(ispoweroftwo(i) == 0 && i%2 == 0){
			count++;
			printf("%d\n", i);
		}
	}

	if(count == 0)
		printf("CONJUNTO VACIO\n");
	return 0;
}