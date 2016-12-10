#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
	int t;scanf("%d", &t);
	string s;
	int even, odd;
	
	while(t--){
		cin.ignore();
		even = odd = 0;
		
		getline(cin, s);
		int longitud = s.size();
		for(int i = 0; i < longitud;i++){
			if(s[i]%2 == 0) even++;
			else odd++;	
		}
		
		if(even > odd)
			cout << "Even";
		else 
			cout << "Odd";
		if(t == 0) break;	
		cout << endl;
		
	}

	return 0;
}
