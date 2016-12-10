#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string sum, sumorg;
	
	cin >> sum;
	sort(sum.begin(), sum.end());
	
	for (unsigned int i = 0; i < sum.size(); i++){
		if(sum[i] != '+'){
			sumorg += sum[i];
			if(i < sum.size()-1)
				sumorg += "+";
		}
	}
	cout << sumorg;
	
	return 0;
}
