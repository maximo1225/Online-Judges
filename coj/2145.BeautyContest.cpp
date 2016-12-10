#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t;cin >> t;
	int a[10], j = 1;
	while(t--){
		int sum = 0;
		for(int i = 0;i < 10;i++)
			cin >> a[i];
			
		sort(a, a+10);
		for(int i = 1; i < 9; i++){
			sum += a[i];
		}
		cout << j << " " << sum << endl;
		j++;
			
	}
	return 0;
}
