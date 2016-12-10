#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string text;
	cin >> text;
	int n = (int)text.size();
	int m = n/2;
	if(n%2 == 0){
		reverse(text.begin(), text.end()-m);
		reverse(text.begin()+(n-m), text.end());
	}else {
		reverse(text.begin(), text.end()-m-1);
		reverse(text.begin()+(n-m), text.end());
	}
	cout << text << endl;
	return 0;
}
