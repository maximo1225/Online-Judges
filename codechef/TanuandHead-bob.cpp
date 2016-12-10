#include <iostream>
#include <string>

using namespace std;

int main(){
	int t;cin >> t;
	int n;string s;
	while(t--){
		int Y = 0, I = 0;
		cin >> n;
		cin >> s;
		for(int i = 0;i < n;i++){
			if(s[i] == 'I'){
				I++;
				break;
			}
			if(s[i] == 'Y'){
				Y++;
				break;
			}
		}
		if(I)cout << "INDIAN" << endl;
		else 
			if(Y)cout << "NOT INDIAN" << endl;
			else cout << "NOT SURE" << endl;
	}
	return 0;
}
