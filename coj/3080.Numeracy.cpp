#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
	int t;
	
	cin >> t;
	
	while(t--){
		int a, b, c;
		char operador, igual;
		scanf("%d %c %d %c %d", &a, &operador, &b, &igual, &c);
		//cout << a << operador<< b<< igual<< c;
		if(operador == '+'){
			if(a+b == c) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
		else if(operador == '-'){
			if(a-b == c) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
		else if(operador == '*'){
			if(a*b == c) cout << "Yes" << endl;
			else cout << "No" << endl;
			
		}
		else if(operador == '/'){
			if(b > 0 && a/b == c) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
		
		
	}
	
	return 0;
}
