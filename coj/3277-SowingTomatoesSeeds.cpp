
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
	int n, value;cin >> n;

	vector< int > positions;
	for(int i = 0; i < n; i++){
		cin >> value;
		positions.push_back(value);
	}
	
	if(n < 3){
		cout << "YES" << endl;
		return 0;
	}
	
	sort(positions.begin(), positions.end());
	
	bool status = true;
	int dif = positions[1]-positions[0];
	for(int i = 2; i < n && n > 2; i++){
		
		if(dif == positions[i] - positions[i-1])
			continue;
		else {
			status = false;
		}
	}
	
	if(status) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
