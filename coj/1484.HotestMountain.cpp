#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int n, ans;
	bool  flag = true;
	cin >> n;
	float mountains[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> mountains[i];
	}
	
	for (int i = 0; i < n; i++)
	{
		if(flag ==  true){
			ans = i;
			flag = false;
		}
		if(mountains[ans] < mountains[i])
			ans = i;
		else if(mountains[ans] == mountains[i])
			ans = i;
	}
	cout << ans+1 << endl;
	
	
	
	
	return 0;
}
