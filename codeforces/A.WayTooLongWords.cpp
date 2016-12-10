#include <iostream>
#include <string>

using namespace std;

int main(){
	int t;
	string cadena;

	cin >> t;
	while(t--){
		cin >> cadena;
		if((int)cadena.size() > 10) cout << cadena[0] << cadena.size()-2 << cadena[cadena.size()-1] << endl;
		else 
			cout << cadena << endl;	
	}
	
	return 0;
}
