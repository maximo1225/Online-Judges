#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;cin >> t;
	int a, b;
	
	while(t--){
		cin >> a >> b;
		if(a < b)
			swap(b, a);
		cout << a << " " << a+b << endl;
	}
	return 0;
}
