#include <iostream>
#include <string>
#include <cstdio>
 
using namespace std;
 
int main() {
	int n, m;cin >> n;
	string cans, ans;cin >> cans;
	cin >> m;
	while(m--){
		cin >> ans;
		float score = 0.0;
		for(int i=0;i<n;i++){
			if(ans[i] == cans[i]) score++;
			else if(ans[i] != cans[i] && ans[i] != '#') score -= 0.25;
		}
		printf("%.2f\n", score);
	}
	return 0;
}
