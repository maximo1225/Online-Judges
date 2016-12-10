#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	int n;cin >> n;
	map<int, string> lista;
	
	lista[1] = "one";
	lista[2] = "two";
	lista[3] = "three";
	lista[4] = "four";
	lista[5] = "five";
	lista[6] = "six";
	lista[7] = "seven";
	lista[8] = "eight";
	lista[9] = "nine";
	lista[10] = "ten";
	lista[11] = "eleven";
	lista[12] = "twelve";
	int numero;
	for(int i = 0;i < n;i++){
		cin >> numero;
		cout << lista[numero] << endl;
	}
	
	return 0;
}

