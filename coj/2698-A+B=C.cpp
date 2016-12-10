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
	string cadena;
	int sum = 0;
	
	cin >> cadena;
	for (int i = 0; i < (int)cadena.size(); i++)
		sum += (cadena[i]-'A')+1;
	 cout << sum << endl;
	return 0;
}
