#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int up = 0,  down = 0;
	string s, c;
	cin >> s;
	for (int i = 0; i < s.length(); ++i)
	{
		if(isupper(s[i]))
			up++;
		else
			down++;
	}
	int i = 0;
	if(up > down)
		while(s[i]){
			c += toupper(s[i]);
			i++;
		}
	else if (up < down)
		while(s[i]){
			c += tolower(s[i]);
			i++;
		}
	else 
		while(s[i]){
			c += tolower(s[i]);
			i++;
		}

	cout << c << endl;
	

	return 0;
}