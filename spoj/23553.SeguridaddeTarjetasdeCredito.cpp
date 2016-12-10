#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <vector>

using namespace std;

int main(){
	string cadena, sub, aux, aux2, aux3, aux4;
	long long k;
	int p = 0;
	vector<string> pila;
	cin >> cadena >> k;
	
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0+p; j < 4+p; j++){
			sub += cadena[j];
		}
		
		reverse(sub.begin(), sub.end());
		pila.push_back(sub);
		sub.erase();
		p += 4;
	}
	
	for (int i = 0; i < k%4; i++)
	{
		aux = pila[0];
		pila[0] = pila[3];
		aux2 = pila[1];
		pila[1] = aux;
		aux3 = pila[2];
		pila[2] = aux2;
		pila[3] = aux3;
	}
	for (int i = 0; i < (int)pila.size(); i++)
	{
		cout << pila[i];
	}
	cout << endl;
	if(cadena == pila[0]+pila[1]+pila[2]+pila[3]) cout << "NO" << endl;
	else cout << "SI" << endl;
	
	return 0;
}

