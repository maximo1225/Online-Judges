#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
	int t;
	string direccion;
	
	cin >> t;
	while(t--){
		cin >> direccion;
		int num = (direccion[0] - 'a') + 1;
		int convert = direccion[1] - '0';
		if(num%2 != 0 && direccion[1]%2 == 0) cout << "BLACK" << endl;
		else if(num%2 != 0 && convert%2 != 0) cout << "WHITE" << endl;
		else if(num%2 == 0 && convert%2 !=0 ) cout << "BLACK" << endl;
		else if(num%2 == 0 && convert%2 == 0) cout << "WHITE" << endl;
	}
	return 0;
}
