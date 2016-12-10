#include <iostream>

using namespace std;

int main(){
	int n, value; cin >> n;
	while(n--){
		int sum = 0;
		cin >> value;
		for(int i = 1; i < value; i++)
			if(value%i == 0) sum+=i;
		
		if(sum < value) cout << "Deficient" << endl;
		else if(sum == value) cout << "Perfect" << endl;
		else cout << "Abundant" << endl;
	}
	return 0;
}
