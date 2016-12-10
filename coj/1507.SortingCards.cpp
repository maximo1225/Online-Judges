#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
typedef pair<int, int> par;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		vector<par> cartas;
		int n;
		cin >> n;
		
		for (int i = 0; i < n; i++)
		{
			char left, right;
			cin >> left >> right;
			int cl; cl = left - '0';
			
			if(left == 'A') cl = 1;
			else if(left == 'T') cl = 10;
			else if(left == 'J') cl = 11;
			else if(left == 'Q') cl = 12;
			else if(left == 'K') cl = 13;
			
			int cr; 
			if(right == 'S') cr = 1;
			if(right == 'H') cr = 2;
			if(right == 'C') cr = 3;
			if(right == 'D') cr = 4;
			
			cartas.push_back(make_pair(cl, cr));
		}
		
		sort(cartas.begin(), cartas.end());
		
		for (int i = 0; i < (int)cartas.size(); i++)
		{
			int cl, cr;
			cl = cartas[i].first;
			if(cl == 1)cout << "A";
			if(cl == 10) cout << "T";
			if(cl == 11) cout << "J";
			if(cl == 12) cout << "Q";
			if(cl == 13) cout << "K";
			if(cl >= 2 && cl <= 9) cout << cl;
			
			cr = cartas[i].second;
			if(cr == 1) cout << "S";
			if(cr == 2) cout << "H";
			if(cr == 3) cout << "C";
			if(cr == 4) cout << "D"; 
			
			cout << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}



