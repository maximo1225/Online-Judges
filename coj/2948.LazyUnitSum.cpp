#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;scanf("%d", &t);
	string numbers;

	while(t--){
		cin >> numbers;
		
		int sum = 0;
		int len = numbers.size();
		while(len != 1){
			for(int i = 0;i< len;i++)
				sum += numbers[i]-'0'; 
			numbers = to_string(sum);
			sum = 0;
			len = numbers.size();
		}
		cout << numbers << endl;
		
	}
	return 0;
}
