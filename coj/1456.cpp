#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;
	
	cin >> t;
	long long a[t], left;
	
	for (int i = 0; i < t; i++){
		cin >> a[i];
	}
	
	sort(a, a+t);
	
	for (int i = 0; i < t; i++)
	{
		left = a[i];
		if(left == a[i+1]) continue;
		else if(left != a[i+1] && i+1 == t-1){
			cout << a[i+1] << endl;
			break;
		}
		else if(i+2 <= t && left != a[i+1] && a[i+1] != a[i+2]){
			cout << a[i+1] << endl;
			break;
		}
	}
	
	return 0;
}
