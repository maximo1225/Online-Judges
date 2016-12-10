#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<string> texts;
	vector<int> chain;
	string line;
	int n, margen;//margenlateral;
	while(getline(cin, line)){
		texts.push_back(line);
	}

	for (int i = 0; i < texts.size(); ++i)
	{
		chain.push_back(texts[i].length());
	}
	sort(chain.begin(),chain.end());
	n = chain[chain.size()-1];

	//first line of asterics
	for (int i = 0; i < n+2; ++i)
	{
		cout << "*";
	}
	cout << endl;
	for (int i = 0; i < texts.size(); ++i)
	{

		margen = n - texts[i].length();
		//margenlateral = margen/2;	
		// if(margenlateral%2 != 0)
		// 	margenlateral = (margen/2)+1;
		// else
		// 	margenlateral = margen/2;
		
		cout << "*";
		if(margen%2 != 0 && isupper(texts[i][0])){
			for (int j = 0; j < margen/2; ++j)
			{
				cout << " ";
			}
			cout << texts[i];
			for (int j = 0; j < ((margen%2 != 0)? (margen/2)+1 : margen/2); ++j)
			{
				cout << " ";
			}
			cout << "*" << endl;
		}else{

			for (int j = 0; j <((margen%2 != 0)? (margen/2)+1 : margen/2); ++j)
			{
				cout << " ";
			}
			cout << texts[i];
			for (int j = 0; j < margen/2; ++j)
			{
				cout << " ";
			}
			cout << "*" << endl;
		}
	}
	//last line of asterics
	for (int i = 0; i < n+2; ++i)
	{
		cout << "*";
	}
	cout << endl;

	return 0;
}