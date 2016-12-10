#include <stdio.h>
#include <string.h>

#define N 3
void burbuja(int arreglo[], int);


int main(){
	int i, datos[N], act[N];
	char cadena[N];
	
	for (i = 0; i < N; i++)
	{
		scanf("%d", &datos[i]);
	}
	
	scanf("%s", cadena);
	for (i = 0; i < N; i++)
		act[i] = (cadena[i] - 'A');
	
	burbuja(datos, N);
	printf("%d %d %d\n", datos[act[0]], datos[act[1]], datos[act[2]]);
	return 0;
}

void burbuja(int arreglo[], int n){
	int aux, i, j;
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if(arreglo[i] > arreglo[j]){
				aux = arreglo[i];
				arreglo[i] = arreglo[j];
				arreglo[j] = aux;
			}
		}
		
	}
	
}
