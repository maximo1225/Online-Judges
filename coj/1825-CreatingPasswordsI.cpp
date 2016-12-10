#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <fstream>
using namespace std;

int main(){
	int t;cin >> t;
	char code[7];
	char name[185];
	char *token;
	const char s[2] = " ";
	
	while(t--){
		string ans;
		scanf("%s", code);
		cin.get(name, 185);
		for(int i = 0; i < (int)strlen(code)-3; i++)
			ans += code[i];
		token = strtok(name, s);
		while(token != NULL){
			for(int i = 0;i < (int)strlen(token); i++)
				ans += token[i];
			ans += '*';
			token = strtok(NULL, s);
		}
		ans.erase(ans.begin()+(int)ans.size()-1);	
		ans += code[3];
		ans += code[4];
		ans += code[5];
		
		cout << ans << endl;
	}
	return 0; 
}
