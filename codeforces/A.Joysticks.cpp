#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b;
	int ans = 0;
	cin >> a >> b;
	while(max(a, b)>1 && min(a, b)>0){
		ans++;
		if(a > b){
			b++;
			a -= 2;
		}else {
			a++;
			b -= 2;
		}
	}
	cout << ans << endl;
	return 0;
}
