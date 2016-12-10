#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main(){
	
	string frase, ans = ".", vocales = "AEIOUYaeiouy";
	bool food;
	cin >> frase;
	
	for (unsigned int i = 0; i < frase.size(); i++)
	{
		for (unsigned int j = 0; j < vocales.size(); j++){
			if(frase[i] == vocales[j]){
				food = false;
				break; 
			}else{
				food = true;
			}
			
		}
		if(food == true){
			if(isupper(frase[i])) 
				ans += tolower(frase[i]);
			else ans += frase[i];
			ans += ".";
		}	
	}
	
	ans.erase(ans.size()-1);
	cout << ans << endl;
	
	return 0;
}
