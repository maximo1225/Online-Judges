#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;
typedef vector<int> vectorial;
int countSetBits(unsigned int n)
{
  unsigned int count = 0;
  while(n)
  {
    count += n & 1;
    n >>= 1;
  }
  return count;
}

vectorial toBinary(unsigned int n){
	vector<int> ans; 
	while(n > 0){
		ans.push_back(n%2);
		n >>= 1;
	}
	return ans;	
}

int main() {
	int n, b;
	while(cin >> n){
		vector<int> ans;
		ans = toBinary(n);
		reverse(ans.begin(), ans.end());
		if(n == 0) break;
		printf("The parity of ");
		for(int i=0;i<ans.size();i++) printf("%d", ans[i]);
		printf(" is %d (mod 2).\n",countSetBits(n));
	}
	return 0;
}
