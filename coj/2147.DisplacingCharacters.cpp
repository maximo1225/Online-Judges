#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;cin >> n;
	string s;int k;
	string aux;
	while(n--){
		cin >> s >> k;
		int len = s.size();
		while(k--){
			aux = s[len-1];
			s.erase(len-1, len-1);
			s.insert(0, aux);
		}
		cout << s << endl;
	}
	return 0;
}
