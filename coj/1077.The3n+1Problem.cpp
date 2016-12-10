#include <iostream>
#include <algorithm>
using namespace std;

int hoc(int n){
	int count = 0;
	while(n != 1){
		if((n%2) == 0)
			n /= 2;
		else
			n = (n*3)+1;
		++count;
	}	
	return count+1;
}

int Max(int a, int b){
	if(b < a)swap(b, a);
	int max = 0;
	
	for(int i=a;i <= b;i++){
		int stdhoc = hoc(i);
		if(stdhoc > max)
			max = stdhoc;
	}
	return max;
}

int main() {
	int a, b;
	
	while(cin >> a >> b){
		cout << a << " " << b << " " << Max(a, b) << endl;
	}
	return 0;
}
