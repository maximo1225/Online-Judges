#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;cin >> t;
	int d, c;
	while(t--){
		int sum = 0;
		cin >> d >> c;
		int a[c];
		for(int i = 0; i < c;i++)
			cin >> a[i];
			
		sort(a, a+c);
		for(int i = 0;i < c && d >= a[i];i++){
			sum++;
			d -= a[i];
		}
		cout << sum << endl;
	}
	return 0;
}
