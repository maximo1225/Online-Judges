#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin >> t;
	while(t--){
		int n, value, sum = 0;cin >> n;
		for(int i=0;i<n;i++){
			cin >> value;
			sum += value;
		}
		if(sum%n == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
		
	}
	return 0;
}
