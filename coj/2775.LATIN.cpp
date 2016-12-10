#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;cin >> n;
	string text, vowels = "aeiou";
	
	while(n--){
		bool status = false;
		cin >> text;
		for(int i=0;i<vowels.size();i++){
			if(text[0] == vowels[i]){
				status = true;
				break;
			}
			
		}
		
		if(status){
			text.append("cow");
		}else{
			text += text[0];
			text.erase(0, 1);
			text.append("ow");
		}
		cout << text << endl;
	}
	return 0;
}
