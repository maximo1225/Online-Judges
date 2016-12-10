#include <iostream>
#include <string>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	int malo = 0;
	bool estado = false;
	string palabra; cin >> palabra;
	string cadena; cin >> cadena;
	
	string respuesta;
	for (int i = 0; i < (int)palabra.size(); i++)
		respuesta += "_";
	
	int i, encontrado = palabra.size();
	
	for ( i = 0; i < (int)cadena.size() && malo < 9; i++)
	{
		char letra = cadena[i];
		for (int j = 0; j < (int)palabra.size(); j++)
		{
			
			if(palabra[j] == letra){
				respuesta[j] = letra;
				estado = true;
				encontrado--;
			}
		}
		
		if(estado == false) malo++;
		estado = false;
		if(encontrado <= 0) break;
		
	}
		
	
	if(encontrado > 0)
		cout << "Ahorcado hasta " << respuesta << endl;
		
	else 
		cout << "Alicia gana en " << i+1 << " pasos" << endl;
	return 0;
}
