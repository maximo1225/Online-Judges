#include <iostream>
#include <string>
#include <cstdio>
#define pi 3.14f
using namespace std;

int main(){
	double r, a, b;
	string figura;
	cin >> figura;
	
	if(figura == "circle"){
		cin >> r;
		cout << 
		printf("%lf", pi*r*r);
	}
	else if(figura == "triangle" || figura == "rhombus"){
		cin >> a >> b;
		printf("%lf", (a*b)/2);
	}
	return 0;
}
