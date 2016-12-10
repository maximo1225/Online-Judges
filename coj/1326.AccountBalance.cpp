#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int n;cin >> n;
	while(n--){
		char type; int dolar, balance = 0;
		int b;cin >> b;
		int t;cin >> t;
		balance += b;
		for(int i=0;i<t;i++){
			cin >> type >> dolar;
			if(type == 'C') balance += dolar;
			if(type == 'D') balance -= dolar;
		}
		cout << balance << endl;
	}
	return 0;
}
