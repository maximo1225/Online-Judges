#include <iostream>
using namespace std;

//Prototype Fuction
int mcd(int, int);

int main(int argc, char const *argv[])
{
	int a,b,x,y,T;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{	
		cin >> a >> b;
		x = b/mcd(a, b);
		y = a/mcd(a,b);
		cout << x << " " << y << endl;
	}

	return 0;
}


int mcd(int a, int b){
	int resultado, burbuja;
	if (a < b){
		burbuja = b;
		b = a;
		a = burbuja;
	}
	resultado = a%b;
	while (resultado != 0){
		burbuja = b;
		b = resultado;
		resultado = burbuja%b;
	}
	return b;
}