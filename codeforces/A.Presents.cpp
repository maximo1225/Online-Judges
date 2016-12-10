#include <iostream>

using namespace std;
int arr[110], ans[110];

int main(){
	int n;cin >> n;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
		
	for(int i = 0; i < n; i++)
		ans[arr[i]-1] = i+1;
		
	for(int i = 0; i < n; i++)
		cout << ans[i] << " ";
	return 0;
}
