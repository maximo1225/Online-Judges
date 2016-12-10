#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	float valor, sum = 0;
	 for (int i = 0; i < 12; i++)
	 {
		 cin >> valor;
		 sum += valor;
	 }
	 printf("$%.2f\n", sum/12);
	return 0;
}
