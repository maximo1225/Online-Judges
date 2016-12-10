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
	int N, i, F, C, E, LE, sodas;
	cin >> N;
	for(i=0;i<N;i++){
		cin >> E >> F >> C;
		sodas=0;
		E += F;
		LE = E;
		while(E>=C){
			sodas += E/C;

			E = E/C + E%C;
			if(E == LE){
				sodas=0;
				break;
			}
			LE = E;
		}
		cout << sodas << endl;
	}	
	
	return 0;
}
