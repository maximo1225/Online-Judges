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
	int t;cin >> t;
	
	while(t--){
		int total = 0;
		int a, b;cin >> a >> b;
		for(int i=a;i<=b;i++)total+=count(i);
		cout << total << endl;
	}
	return 0;
}
