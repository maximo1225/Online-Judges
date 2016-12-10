#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int a1, b1, a2, b2, a3, b3, a4, b4;
	scanf("%d %d", &a1, &b1);
	scanf("%d %d", &a2, &b2);
	scanf("%d %d", &a3, &b3);
	scanf("%d %d", &a4, &b4);

	if(a1 > b3 && b1 > a3)
		cout << "Equipo 1" << endl;
	else if(a3 > b1 && b3 > a1)
		cout << "Equipo 2" << endl;
	else cout << "Empate" << endl;

	return 0;
}

