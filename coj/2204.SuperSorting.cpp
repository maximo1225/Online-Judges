#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		if(n == 1){
			cout << 1 << endl;
		}
		else {
			for(int i = 2;i<=n;i++){
				cout << i << " ";
			}
			cout << 1 << endl;
		}
	}
	return 0;
}
