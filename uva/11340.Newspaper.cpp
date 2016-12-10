#include <iostream>
#include <cstdio>
#include <string>
#include <utility>

using namespace std;

int main(){
	pair<char, float> table[200];
	
	int n, k, m;cin >> n;
	string text;
	char position; int value;
	float cash = 0.0;
	while(n--){
		cin >> k;
		for(int i=0;i<k;i++){
			cin >> position >> value;
			table[(int)position].first = position;
			table[(int)position].second = (float)value/100.0; 
		}
		
		cin >> m;
		for(int j=0;j<=m;j++){
			text = "";
			getline(cin, text);
			for(int i=0;i<(int)text.size();i++){
				cash += table[(int)text[i]].second;
			}
		}
		printf("%.2f$\n", cash);
		cash = 0.0;
	}
	return 0;
}

