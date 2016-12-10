#include <iostream>
#include <string>
#include <cstdio>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	int t;cin >> t;
	int code, day, month, year;
	map<int, int> lista;
	while(t--){
		scanf("%d %d/%d/%d", &code, &day, &month, &year);
		lista[month]++;
	}
	for(int i = 1; i <= (int)lista.size(); i++)
		cout << i << " " << lista[i] << endl;
	return 0;
	
}
