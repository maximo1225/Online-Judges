#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	string numbers;
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		int j, sum = 0;
		cin >> numbers;
		if(numbers[0] == '-') i = 1;
		else j = 0;
		for ( j = 0; j < (int)numbers.size(); j++)
			sum += numbers[j] - '0';
				
		printf("%d", sum);
	}

	
	return 0;
}
