#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
	int a, b, c, n;
	cin >> n;
	int ans[n];
	for(int i=0;i<n;i++){
		cin >> a >> b >> c;
		ans[i] = a+b+c;
	}
 
	sort(ans, ans+n);
	cout << ans[0] << endl;
	return 0;
}
