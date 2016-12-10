#include <iostream>
#include <string>

using namespace std;

int main(){
	string s = "hello", str;
	cin >> str;
	int ans = 0;
	for(int i = 0, j = 0; j < 5 && i < (int)str.size(); i++){
		if(str[i] == s[j]){
			 ans++;
			 j++;
		}
	}
	if(ans == 5)
		cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
