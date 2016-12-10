#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, count = 1;
	bool flag;
	
	
	while(n != 0){
		stack<int> pila;		
		count = 1;
		flag = true;
		cin >> n;
		int valores[n];
		if(n == 0) break;
		for (int i = 0; i < n; ++i)
		{
			cin >> valores[i];
		}

		for (int i = 0; i < n; ++i)
		{
			while(!pila.empty() && pila.top() == count){
				count++;
				pila.pop();
			}
			
			if(valores[i] == count) 
				count++;
			else if(!pila.empty() && pila.top() < valores[i]){
				flag = false;
				break;
			}
			else
				pila.push(valores[i]);
		}
		if(flag) 
			cout << "yes" << endl;
		else 
			cout << "no" << endl;
	}
	return 0;
}