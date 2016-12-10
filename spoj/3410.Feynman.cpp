#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while(cin >> n){
		if(n == 0) break;
		cout << (n*(n+1)/2*(2*n+1)/3) << endl;
	}
	
	return 0;
}