#include <iostream>
#include <string>
#include <set>
#include <cctype>
using namespace std;

int main() {
	int n;cin >> n;
	if(n < 26){
		cout << "NO" << endl;
		return 0;
	}
	string a, letters;cin >> letters;
	set<char> unique;
	for(int i=0; i<n; i++)
		unique.insert(tolower(letters[i]));
		
	if(unique.size() == 26)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
	return 0;
}
