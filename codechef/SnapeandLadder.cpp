#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int t;cin >> t;
	float a, b;
	while(t--){
		scanf("%f %f", &a, &b);
		cout << sqrt(b*b-a*a) << " " << sqrt(b*b+a*a) << endl; 
	}
	return 0;
}

