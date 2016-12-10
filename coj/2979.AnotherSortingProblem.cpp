#include <iostream>
using namespace std;
 
int main() {
	int t;
 
	cin >> t;
	while(t--)
	{
		int n,count = 0;
		cin >> n;
		int arreglo[n];
 
		for(int i = 1; i <= n; i++){
			cin >> arreglo[i];
			if(arreglo[i] != i)count++;
		}
 
		cout << count << endl;
	}
}
