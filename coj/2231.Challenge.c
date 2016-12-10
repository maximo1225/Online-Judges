#include <stdio.h>
#include <string.h>

typedef struct {
	char a[10];
	char b[10];
} par;

int main(void) {
	int n;scanf("%d", &n);
	
	par text;
	
	int i;
	int a, b;a = b = 0;
	while(n--){
		scanf("%s %s", text.a, text.b);
		if(strcmp(text.a, "rock") == 0 && strcmp(text.b, "scissors") == 0)
			a++;
		else if(strcmp(text.a, "scissors") == 0  && strcmp(text.b, "paper") == 0)
			a++;
		else if(strcmp(text.a, "paper") == 0 && strcmp(text.b, "rock") == 0)
			a++;
		else if(strcmp(text.b, "rock") == 0 && strcmp(text.a, "scissors") == 0)
			b++;
		else if(strcmp(text.b, "scissors") == 0  && strcmp(text.a, "paper") == 0)
			b++;
		else if(strcmp(text.b, "paper") == 0 && strcmp(text.a, "rock") == 0)
			b++;
	}
	

	
	if(a > b)
		printf("A win");
	else if(b > a)
		printf("B win");
	else 
		printf("tied");
		
	return 0;
}
