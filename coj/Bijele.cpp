#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n, set[6];
	int originalset[]={1,1,2,2,2,8};
	
	cin >> n;
	while(n--){
		for (int i = 0; i < 6; i++)
		{
			cin >> set[i];
		}
		
		for (int i = 0; i < 6; i++)
		{
			if(set[i] == 0) set[i] = originalset[i];
			else if(set[i] > originalset[i]) 
				set[i] = originalset[i]-set[i];
			else
				set[i] = (set[i]-originalset[i])*-1;
		}
		
		for (int i = 0; i < 6; i++)
		{
			cout << set[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

