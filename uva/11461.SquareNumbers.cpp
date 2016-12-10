#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, pista;
	float caso;
	int count = 0;
	while(cin >> a >> b){
		if(a == 0 && b == 0) break;
		count = 0;
		for (int i = a; i <= b; ++i)
		{
			caso = sqrt(i);
			pista = caso;
			if (caso - pista > 0) continue;
			else count++;
		}
		cout << count << endl;
	}
	return 0;
}