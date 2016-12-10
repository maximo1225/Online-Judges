#include <iostream>
#include <string>

using namespace std;


int main() {
	string left, right;
	int i, j;
	int salto;
	while(cin >> left >> right){
		int count = 0;
		
		if(left == right)
			count = left.size();
		else {
			salto = 0;		
			for(i = 0;i<left.size();i++){
				for(j = salto;j<right.size();j++){
					if(left[i] == right[j]){
						count++;right[j] = '*';break;
					}
				}
				salto = j;
			}
		}
		
		if(count == left.size())
			cout << "Yes" << endl;
		else 
			cout << "No" << endl;
	}
	return 0;
}
