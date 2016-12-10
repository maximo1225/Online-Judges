#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int decimal;
	while(cin >> decimal){
		vector<int> ans;
		if(decimal < 0) break;
		while(decimal>0){
			ans.push_back(decimal%3);
			decimal /=3;
		}
		
		reverse(ans.begin(), ans.end());
		for(int i=0;(int)i<ans.size();i++) cout << ans[i];
		cout << endl;
	}
	return 0;
}
