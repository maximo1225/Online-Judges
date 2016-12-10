#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	string number;
	cin >> t;
	while(t--){
		int sum = 0;
		cin >> number;
		for(int i=0;i<number.size();i++) sum += number[i]-'0';
		if(sum%3 == 0 && number[number.size()-1]%2 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
