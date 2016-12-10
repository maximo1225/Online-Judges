#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main(){
	int t;
	string password;
	cin >> t;
		
	while(t--){
		map<char, int> broken;
		
		cin >> password;
		for (int i = 0; i < (int)password.size(); i++)
		{
			broken[password[i]]++;
		}
		if(broken['B'] == broken['R'] && broken['R'] == broken['O'] && broken['O'] == broken['K'] && broken['K'] == broken['E'] && broken['E'] == broken['N']){ 
			cout << "No Secure" << endl; 
		}else {
			cout << "Secure" << endl;
		}
	}
	
	return 0;
}
