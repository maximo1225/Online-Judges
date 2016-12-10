#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
	// your code goes here
	int t;cin >> t;
	while(t--){
		int sum = 0;
		int n;cin >> n;
		int values[n];
		for(int i = 0; i < n; i++)
			cin >> values[i];
 
		sort(values, values+n);
 
		for(int i = 0; i < n-1; i++)
			sum += values[i];
 
		cout << sum << endl;
	}
	return 0;
}
