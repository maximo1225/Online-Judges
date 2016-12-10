#include <iostream>
#include <string>

using namespace std;

int main(){
	int s, x = 0;
	string str;
	cin >> s;
	while(s--){
		cin >> str;
		if(str[0] == '+' || str[2] == '+') x++;
		else x--;
	}
	
}
