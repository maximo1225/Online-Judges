#include <iostream>
#include <string>


using namespace std;


int main(){
	int n;
	string numbers;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> numbers;
		if(!((numbers[(int)numbers.size()-1]-'0')%2)) cout << "even" << endl;
		else cout << "odd" << endl;
	}
	
	return 0;
}
