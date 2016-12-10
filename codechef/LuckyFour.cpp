#include <iostream>
#include <string>

using namespace std;

int main(){
	int t;cin >> t;
	string s;
	while(t--){
		cin >> s;
		int count = 0;
		for(int i = 0;i < (int)s.size();i++)
			if(s[i] == '4')
				count++;
		cout  << count << endl;
	}
	return 0;
}
