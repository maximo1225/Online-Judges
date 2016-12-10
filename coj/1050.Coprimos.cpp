#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int sum = 0;
	int n;cin >> n;
	
	for(int i=0;i<n;i++)
		if(__gcd(i,n) == 1) sum++;
		
	cout << sum << endl;
	return 0;
}
