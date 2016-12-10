#include <iostream>

using namespace std;
bool lucky(int n){
	int aux;
	while(n > 0){
		aux = n%10;
		if(aux == 7 || aux == 4){
			n /= 10;
			continue;
		}
		else{
			return false;
		}
	}
	return true;
}

int main(){
	int n;cin >> n;
	bool aux = false; 
	for(int i = 1; i <=n; i++){
		if(n % i == 0 && lucky(i) == true) 
			aux = true;
	}
	if(aux) cout << "YES"<< endl;
	else cout << "NO"<< endl;
	return 0;
}
