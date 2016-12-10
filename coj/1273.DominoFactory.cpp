#include <iostream>
using namespace std;

int main() {
	int t;cin >> t;
	int a, b, c;
	while(t--){
		cin >> a >> b >> c;
		
		cout << (((a+1)*(a+2))/2)*b*c << endl;
	}
	return 0;
}
