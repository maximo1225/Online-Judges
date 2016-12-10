#include <iostream>

using namespace std;

int reversed(int);
int main(){
	int n, a, b;
	cin >> n;
	
	while(n--){
		cin >> a >> b;
		cout << reversed(reversed(a)+reversed(b)) << endl;
	}
	return 0;
}


int reversed(int n){
	int x = 0;
	while(n > 0){
		x += n%10;
		n /= 10;
		if(n > 0)
			x *= 10; 
	}
	return x;
}
