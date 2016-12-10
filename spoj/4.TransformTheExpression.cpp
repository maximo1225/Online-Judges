#include <iostream>
#include <string>
#include <cctype>
#include <stack>

using namespace std;

int main(){
	int t, n;
	string expression;
	cin >> t;
	
	while(t--){
		cin >> expression;
		stack<char> tail;
		n = expression.length();
		for (int i = 0; i < n; i++)
		{
			if(isalpha(expression[i])){
				cout << expression[i];
			}
			else if(expression[i] != '(' && expression[i] != ')' && !isalpha(expression[i])){
				tail.push(expression[i]);
			}
			else if(expression[i] == ')' && !tail.empty()){
				cout << tail.top();
				tail.pop();
			}
		}
		cout << endl;
			
	
	}
	return 0;
}
