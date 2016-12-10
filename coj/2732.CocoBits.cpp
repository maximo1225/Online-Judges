#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	
	int t;
	string word;
	cin >> t;
	while(t--){
	cin >> word;
	for (unsigned int i = 0; i < word.size(); i++)
	{
		if(isupper(word[i]
		)) word[i] = tolower(word[i]);
		else 
			word[i] = toupper(word[i]);
	}
	
	cout << word << endl;
	}
	
}
