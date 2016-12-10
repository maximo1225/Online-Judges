#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
	int t;scanf("%d", &t);
	string input;
	while(t--){
		int sum = 0;
		cin >> input;
		for(int i = 0;i < (int)input.size();i++)
			sum += input[i]-'0';
		printf("%d\n", sum);
	}
	return 0;
}
