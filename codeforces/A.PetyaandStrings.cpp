#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
using namespace std;

int main(){
	char a[102], b[102];
	scanf("%s", a);
	scanf("%s", b);
	int lena = strlen(a);
	int lenb = strlen(b);
	
	for(int i = 0; i < lena; i++)
		a[i] = tolower(a[i]);
	
	for(int i = 0; i < lenb; i++)
		b[i] = tolower(b[i]);
		
	if(strcmp(a, b)  < 0){
		cout << -1 << endl;
	}else if(strcmp(a, b)  > 0)
		cout << 1 << endl;
	else 
		cout << 0 << endl;
	return 0;
}
