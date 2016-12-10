#include <iostream>

using namespace std;

int main(){
	int a, b, c, sum = 0;
	
	cin >> a >> b;
	
	while(a > 0){
		c = b;
		while(c >0){
			sum += (a%10)*(c%10);
			c/=10;
		}
		a/=10;
	}
	cout << sum << endl;
	return 0;
}
