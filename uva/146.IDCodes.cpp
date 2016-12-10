#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <stack>
#include <queue>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdio>

#define inf (1 << 30)
#define INF (1 << 45LL)
#define pb push_back
#define mp make_pair
#define np next_permutation

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;

int main(){
	while(true){
		string data;cin >> data;
		if(data == "#") break;
		if(np(data.begin(), data.end())) 
			cout << data << endl;
		else 
			cout << "No Successor" << endl;
	
	}
	return 0;
}
