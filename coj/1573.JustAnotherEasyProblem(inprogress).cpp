#include <iostream>
#include <string>
#include <cmath>

using namespace std;
typedef long long  ll;
#define salida(x) cout << #x << " " << x << endl; 
ll convertohex(string);

int main(){
	int t;
	string n;
	cin >> t;
	while(t--){
		ll sum = 0, value;
		
		cin >> n;
		value = convertohex(n);
		sum = (value*(value+1))/2;
		if(sum%value == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
		
	}
	
	return 0;
}

ll convertohex(string number){
	ll sum = 0;
	int unit;
	for (int i = (int)number.size()-1; i >= 0 ; i--)
	{
		if(number[i] == 'A') unit = 10;
		else if(number[i] == 'B') unit = 11;
		else if(number[i] == 'C') unit = 12;
		else if(number[i] == 'D') unit = 13;
		else if(number[i] == 'E') unit = 14;
		else if(number[i] == 'F') unit = 15;
		else unit = number[i]-'0'; 
		
	
		sum += unit*pow(16,i);
		break;
	}
	
	return sum;
}
