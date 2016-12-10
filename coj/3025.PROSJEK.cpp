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
	int lenght, n;
	cin >> lenght;
	int pros[lenght];
	for (int i = 0; i < lenght; i++){
		cin >> n;
		
		pros[i] = n*(i+1);
	}
	cout << pros[0] << " ";
	for (int i = 0; i < lenght && i+1 < lenght; i++)
	{
		cout << pros[i+1]-pros[i] << " ";
	}
	cout << endl;
	return 0;	
}
