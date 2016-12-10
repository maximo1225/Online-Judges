#include <iostream>
#include <cstdio>
#include <string>
#include <ctype.h>
#include <cstdlib>
using namespace std;

string coordinate(string);
int main(int argc, char const *argv[])
{
	int n, x, y, flag = 0;
	string enter, salida, xs, ys;
	cin >> n;
	cin >> enter;
	salida = coordinate(enter);
	for (int i = 0; i < salida.length(); ++i)
	{
		if(salida[i] == '|') {
			flag = 1;
			continue;
		}
		else if(flag == 0)
			xs += salida[i];

		else if(flag == 1)
			ys += salida[i];
	}
	// x = atoi(xs);
	// y = atoi(ys);
	//cout << xs << " " << ys << endl;

	return 0;
}

string coordinate(string stringer){
	string a;
	for (int i = 0; i < stringer.length(); ++i)
	{
		if(stringer[i] == 'R') continue;

		else if(stringer[i] == 'C'){
			a += '|';
			continue;
		}
		a += stringer[i];
	}

	return a;
}