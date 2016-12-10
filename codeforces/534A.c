#include <stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	
	if(n == 1){
		printf("1 \n 1");
		return 0;
	}
	else if(n == 2){
		printf("1 \n 1");
		return 0;
	}
	else if(n == 3){
		printf("2 \n 1 3");
		return 0;
	}
	else if(n == 4){
		printf("4 \n 2 4 1 3");
		return 0;
	}
	
	printf("%d\n", n);
	for(i = 1;i <= n;i += 2)
		printf("%d ", i);
		
	for(i = 2;i <= n;i += 2)
		printf("%d ", i);
	return 0;
}
