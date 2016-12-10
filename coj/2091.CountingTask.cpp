#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int n;cin >> n;
	while(n--){	
		int count = 0;
		string data;cin >> data;
		sort(data.begin(), data.end());
		
		for(int i=0;i<(int)data.size();i++)
			if(data[i] != data[i+1]) count++;
			
		cout << count << endl;
	}
	
	return 0;
}
