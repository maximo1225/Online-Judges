#include <iostream>
#include <cstdio>

using namespace std;

long long invert(long long);
int main(int argc, char const *argv[])
{
	long long x;
	cin >> x;
	cout << invert(x) << endl;
	return 0;
}

long long invert(long long x){
	long long cut, move = 0;
	while (x > 0){
		cut = x%10;
		x /= 10;
		if(cut > 4){
			cut -= 9;
			move = cut*10;
		}

	}
	return move;
}
