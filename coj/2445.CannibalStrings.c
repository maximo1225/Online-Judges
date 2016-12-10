#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	
	char anterior, actual, string[10000];
	int i, j;
	int anteriorsum = 0;
	int actualsum = 0;
	scanf("%s", string);
	
	for (i = 0; i < (int)strlen(string); i++)
	{
		for (j = i+1; j < (int)strlen(string); j++)
		{
			if(isupper(string[i]) && islower(string[j])) actualsum++;
			else if(string[i] > string[j]) actualsum++;
			else if(string[i] < string[j]) break;
		}
		actual = string[i];
		if(actualsum > anteriorsum){ 
			anterior = actual;
			anteriorsum = actualsum;
		}
		else if(actualsum == anteriorsum){
			if(anterior < actual){
				anterior = actual;
			}
			
		}
		
		actualsum = 0;
	}
	
	printf("%c\n", anterior);
	
	return 0;
}
