#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y){
	return x.first > y.first && x.second > y.second;	
}

int main() {
	int t, n; cin >> t;
	int start, ends;
	vector< pair<int, int> > time;
	
	while(t--){
		cin >> n;
		time.resize(n);
		time.clear();
		bool estado = true;
		for(int i = 0; i < n; i++){
			cin >> start >> ends;
			time.push_back(make_pair(start, ends));
		}
		
		sort(time.begin(), time.end(), cmp);
		
		for(int i = (int)time.size()-1; i > 0; i--){
			if(time[i].second == time[i-1].first || time[i].second > time[i-1].first){
				//cout << time[i].first << "---" << time[i].second << endl;
				//cout << time[i-1].first << "---" << time[i-1].second << endl;

				cout << "Conflict" << endl;
				estado = false;
				break;
			}
			//cout << time[i].first << " " << time[i].second << endl;
		}
		
		if(estado) cout << "No Conflict" << endl;
		
	}
	return 0;
}