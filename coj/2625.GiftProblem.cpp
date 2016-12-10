#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b;
	string str = "OIE";
	cin >> a >> b;
	for(int i = 0;i<a;i++){
		for(int j = 0;j < b; j++){
			if(j%3 == 1)
				cout << str[(j+i)%3];
			else if(j%3 == 2)
				cout << str[(j+i)%3];
			
			else if(j%3 == 0)
				cout << str[(j+i)%3];	
			
		}
		
		cout << endl;
	}
	return 0;
}
