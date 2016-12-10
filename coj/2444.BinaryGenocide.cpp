#include <iostream>
using namespace std;

int count(int n)
{
    unsigned int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}


int main() {
	// your code goes here
	int n, survivor = 0;
	while(cin >> n){
		if(count(n) % 2 == 0)survivor++;
	}
	cout << survivor << endl;
	return 0;
}
