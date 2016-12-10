#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int m, n;
	while(cin >> m >> n){
		if(m == 0 && n == 0) break;
		else if(m == 1) cout << n << " Knights may be placed on a " << m << " row " << n << " column board." << endl; 
		else if(n == 1) cout << m << " Knights may be placed on a " << m << " row " << n << " column board." << endl; 
		else if(m == 2){ 
			if(n%4 == 3) cout << n+1 << " Knights may be placed on a " << m << " row " << n << " column board." << endl;
			else cout << n+(n%4) << " Knights may be placed on a " << m << " row " << n << " column board." << endl;
		}
		else if(n == 2){
			if(m%4 == 3)
				cout << m+1 << " Knights may be placed on a " << m << " row " << n << " column board." << endl;
			else cout << m+(m%4) << " Knights may be placed on a " << m << " row " << n << " column board." << endl;
		}
		else cout << (((m*n)+1)/2) << " Knights may be placed on a " << m << " row " << n << " column board." << endl;
	}
	
	return 0;
}