#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int clon, iterador = 2, valor = 1, casos =1;
	int numero;
	float numero1, f;
	while(cin >> numero){
		numero1 = numero;
		if(numero1 == 0) break;
		iterador = 2;
		valor = 1;
		while(numero1 > 1){
			f = numero1/iterador;
			clon = f;
			if((f - clon) > 0) iterador++;
			else{ 
				numero1 /= iterador;
				valor *= iterador;o
			}
		}
		valor /= iterador;
		valor += iterador;
		cout << "Case " << casos << ": " << valor << endl;
		casos++;
	}
	return 0;
}
