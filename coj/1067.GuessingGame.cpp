#include <iostream>
#include <string>
using namespace std;

int main() {
	int lower=0, upper=11,  number;
	string data, c;
	int sum = 0;
	while(true){
		cin >> number;
		if(!number) break;
		cin >> c >> data;
		if(c == "right"){
			if(number >= upper || number <= lower)
				cout << "Stan is dishonest" << endl;
			else cout << "Stan may be honest" << endl;
			lower = 0; upper = 11;
		}
		if(data == "high"){ 
			if(upper > number) upper = number;
		}
		else if(data == "low"){
			if(lower < number) lower = number;
		}

	}
	return 0;
}
