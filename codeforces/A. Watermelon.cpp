#include <iostream>

using namespace std;

int main(){
	
	int w;cin >> w;
	int i = 1;
	bool a = false;
	while(i <= w/2){
		if(i % 2 == 0 && ((w-i) % 2 == 0)){
			a = true;
			cout << "YES" << endl;
			break;
		}
		i++;
	}
	if(a == false) cout << "NO" << endl;
	return 0;
}
