#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Bsearch(char a[], int, char);
int main(){
	int i;
	char alpha1[26], alpha2[26];
	//char first[26], second[26], ambos[26];
	
	scanf("%s", alpha1);
	scanf("%s", alpha2);
	printf("First:");
	for (i = 0; i < (int)strlen(alpha1); i++)
	{
		if(Bsearch(alpha2, (int)strlen(alpha2), alpha1[i]) == -1)
			printf("%c", alpha1[i]);
	}
	printf("\nSecond:");
	for (i = 0; i < (int)strlen(alpha2); i++)
	{
		if(Bsearch(alpha1, (int)strlen(alpha1), alpha2[i]) == -1)
			printf("%c", alpha2[i]);
	}
	printf("\nFirst&Second:");
	for (i = 0; i < (int)strlen(alpha2); i++)
	{
		if(Bsearch(alpha1, (int)strlen(alpha1), alpha2[i]) != -1)
			printf("%c", alpha2[i]);
	}
	printf("\n");
	return 0;
}


int Bsearch(char a[], int n, char valor){
	int i = 0;
	int j = n;
	int mid, ans = -1;
	while(i <= j){
		mid = (i+j)/2;
		if (valor > a[mid])
			i = mid+1;

		else if(valor < a[mid])
			j = mid-1;

		else if (valor == a[mid]){
			ans=mid;
			j = mid-1;
		
		}
	}
	if(i >= n) return ans;
	else return ans;
}
