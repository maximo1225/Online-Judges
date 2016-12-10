#include <iostream>
#include <string>

using namespace std;

int main(){
	string figura;
	int a, b;
	cin >> figura;
	if(figura == "square"){
		cin >> a;
		cout << a*a << endl;
	}
	else if(figura == "rectangle"){
		cin >> a >> b;
		cout << a*b << endl;
	}
	return 0;
}
