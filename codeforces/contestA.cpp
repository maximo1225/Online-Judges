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
	string s, cap, cap2;cin >> s;
	int count = 0;
	bool ab = false, ba = false;
	if(s == "ABA"){
		cout << "NO" << endl;
		return 0;
	}
	if(s == "BAB"){
		cout << "NO" << endl;
		return 0;
	}
	for(int i=0;i<(int)s.size();i++){
		cap = s[i];
		cap2 = s[i+1];
		if(cap+cap2 == "AB" || cap+cap2 == "BA"){
			count++;
			if(cap+cap2 == "AB") ab = true;
			if(cap+cap2 == "BA") ba =  true;
		}
	}
	if(count >= 2 && ab && ba)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
	return 0;
}
