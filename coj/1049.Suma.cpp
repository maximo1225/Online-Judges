#include <iostream>

using namespace std;
int main(){
	int n;
	cin>>n;
	
	if(n >= 1)
		cout<<((n+1)*n)/2<<endl;
	else{
		n*=-1;
		cout<<((((n+1)*n)/2)*-1)+1<<endl;
	}
	return 0;
}
