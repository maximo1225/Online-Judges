#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int n;
	string valor;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> valor;
		if(valor[valor.size()-1]-'0' < 5 && valor[valor.size()-1]-'0' > 0)
			cout << "NO" << endl;
		else if(valor[(int)valor.size()-1]-'0' == 5 || valor[(int)valor.size()-1]-'0' == 0)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	
	
	return 0;
}
