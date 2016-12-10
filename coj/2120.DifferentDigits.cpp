#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
	int n, m, memo[5050];
	
	for (int i = 0; i < 5000; i++) {
		int numero = i;
		set<int>di;
		bool e = 0;
		while( numero ){
			if( di.count( numero%10 ) ){
				memo[ i ] = 0;
				e = 1;
				break;
			}
			di.insert( numero%10 );
			numero /= 10;
		}
		
		if( !e ) memo[ i ] = 1;
	}
	
	while(cin >> n >> m){
		int res = 0;
		for (int i = n; i <= m; i++)
		{
			if( memo[ i ] ) res++;
		}
		
		cout << res << endl;
	}
	return 0;
}
