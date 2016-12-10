#include <iostream>
#include <cstdio>


using namespace std;

int main(){
	int a, b, c;
	
	while(cin >> a >> b >> c){
		if(!a && !b && !c) break;
		
		if(b-a == c-b)
			cout << "AP" << " " << c+(b-a) << endl;
		else if(b/a == c/b)
			cout << "GP" << " " << c*(b/a) << endl;
	}
	
	return 0;
}
