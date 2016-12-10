#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
	int n;scanf("%d", &n);
	string a, b;cin >> a >> b;
	int t;scanf("%d", &t);
	int c, d;
	
	string aux1, aux2;
	for(int i = 0; i<t;i++){
		scanf("%d %d", &c, &d);
		aux1 = a.substr(c, d);
		aux2 = b.substr(c, d);
		
		a.erase(c, d);
		b.erase(c, d);
		
		a.insert(c, aux2);
		b.insert(c, aux1);
			
	}
		
	cout << a << "\n" << b << "\n"; 
	return 0;
}
