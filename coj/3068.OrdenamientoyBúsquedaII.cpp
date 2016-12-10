#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

vector<int> set, q1, q2;

int main() {
	int n, a, b;scanf("%d", &n);
	int value;
	for(int i = 0; i < n; i++){
		scanf("%d", &value);
		set.push_back(value);
	}
	
	sort(set.begin(), set.end());
	
	scanf("%d %d", &a, &b);
	for(int i = 0; i < a; i++){scanf("%d", &value); q1.push_back(value);}
	for(int i = 0; i < b; i++){scanf("%d", &value); q2.push_back(value);}
	
	for(int i = 0; i < a; i++){
		if(binary_search(set.begin(), set.end(), q1[i]))
			printf(":)\n");
		else printf(":(\n");
	}
	
	for(int i = 0; i < b; i++) printf("%d\n", set[q2[i]-1]);
	return 0;
}