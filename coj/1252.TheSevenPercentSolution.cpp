#include <iostream>
#include <string>

using namespace std;

int main(){
	string text;
	while(getline(cin, text)){
		if(text == "#")break;
		
		for(int i = 0;i<(int)text.size();i++){
			if(text[i] == ' '){
				cout << "%20";
			}
			else if(text[i] == '!'){
				cout << "%21";
			}
			else if(text[i] == '$'){
				cout << "%24";
			}
			else if(text[i] == '%'){
				cout << "%25";
			}
			else if(text[i] == '('){
				cout << "%28";
			}
			else if(text[i] == ')'){
				cout << "%29";
			}
			else if(text[i] == '*'){
				cout << "%2a";
			}
			else cout << text[i];
		}
		
		cout << endl;
	}
	return 0;
}
