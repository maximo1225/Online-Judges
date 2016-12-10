#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string x, y, z;
	int n, status = 0;

	cin >> x >> y;
	cin >> n;

	for (int i = 0; i < ((n%2 == 0)?n/2 : (n/2)+1); ++i)
	{
		z += x[i];
		for (int j = i; j < ((n%2 == 0)?n/2 : n/2); ++j)
		{
			z += y[j];
			break;
		}
		
	}
	cout << z << endl;

	return 0;
}