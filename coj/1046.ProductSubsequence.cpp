#include <iostream>
using namespace std;

int main() {
	int t;cin >> t;
	long long a, b;
	while(t--){
		int cum = 0;
		cin >> a >> b;
		for(int  i = a;i<=b;i++)
			cum += ((i)*(i+1)*(i+2))%100;
			
		cout << cum%100 << endl;

	}
	return 0;
}
