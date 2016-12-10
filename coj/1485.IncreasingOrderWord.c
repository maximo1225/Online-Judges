#include <stdio.h>
#include <string.h>

void seleccion(char arreglo[], int);

int main(){
	char string[100];
	scanf("%s", string);
	
	seleccion(string, strlen(string));
	printf("%s\n", string);	
	return 0;
}

void seleccion(char arreglo[], int n){
	int i, j, minimo;
	int aux;
	for (i = 0; i < n-1; i++)
	{
		minimo = i;
		for (j = i+1; j < n; j++)
		{
			if(arreglo[j] < arreglo[minimo]){
				minimo = j;
			}
			else if(arreglo[i] == arreglo[j]){
				if(arreglo[i] > arreglo[j]){
					aux = arreglo[j];
					arreglo[j] = arreglo[i];
					arreglo[i] = aux;
				}	
			}
		}
		
		aux = arreglo[minimo];
		arreglo[minimo] = arreglo[i];
		arreglo[i] = aux;
		
	}
}
