#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int sum = 0;
		int n, p;
		cin >> n;
		cin >> p;
		int bars[p];
		for (int i = 0; i < p; i++)
		{
			cin >> bars[i];
		}
		bool flag = true;
		for (int i = 0; i < 1<<p; i++)
		{
			
			for (int j = 0; j < n; j++)
			{
				if(i & 1 << j){					sum += bars[j];
				}
			}
			if(sum == n){ 
				cout << "YES" << endl;
				flag = false;
				sum = 0;
				break;
			}
		}
		if(flag == true){ 
			cout << "NO" << endl;
			sum = 0;
		}
	}
	return 0;
}
