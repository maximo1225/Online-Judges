#include <isotrea>
#include <string>

using namespace std;

int main(){
	int intergers[3], act;
	string abc;
	
	for (int i = 0; i < 3; i++)
	{
		cin >> intergers[i];
	}
	cin >> abc;
	//----------------------------
	for (int i = 0; i < 3; i++)
	{
		act = abc[i] - "A";
		cout << act << " ";
	}
	
	
	
	return 0;
}
