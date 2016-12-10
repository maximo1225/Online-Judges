#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <map>
#include <set>
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

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;


int main(){
	int n;cin >> n;
	getchar();
	while(n--){
		getchar();
		vector<int> list;
		string numbers;getline(cin, numbers);
		int length = numbers.size();

		for(int i=0;i<length;i++)
			if(numbers[i] != ' ')
				list.pb(numbers[i]-'0');
		
		string array[(int)list.size()];
		string newarray[(int)list.size()];
		for(int i = 0;i<(int)list.size();i++)
			cin >> array[i];
		
		for(int i=0;i<(int)list.size();i++)	
			newarray[list[i]-1] = array[i];
			
		for(int i=0;i<(int)list.size();i++)
			cout << newarray[i] << endl;
		cout << endl; 
	}
	return 0;
}
