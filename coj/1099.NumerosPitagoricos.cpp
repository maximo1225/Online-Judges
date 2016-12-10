
#include <iostream>
#include <stack>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <cstring>
#include <string>
#include <map>
 
#define inf (1 << 30)
#define INF (1 << 45LL)
#define pb push_back
#define mp make_pair

using namespace std;
 
typedef pair<int, int> pi;
typedef long long ll;

int main(){
	int a, b, c;
	while(cin >> a >> b >> c){
		if(a == 0) break;
		if((a*a+b*b) == (c*c))
			cout << "right" << endl;
		else if((a*a+c*c) == (b*b)) 
		cout << "right" << endl;
		else if((b*b+c*c) == (a*a))
			cout << "right" << endl;
		else cout << "wrong" << endl;
	}
	
	return 0;
}
