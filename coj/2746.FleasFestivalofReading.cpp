#include <iostream>
#include <string>

using namespace std;

int main() {
	// your code goes here
	string text;cin >> text;
	int a = 0, b = 0;
	for(int i=0;i<(int)text.size();i++){
		if(text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U')
			a++;
		else b++;
	}
	cout << a << " " << b << endl;
	return 0;
}
