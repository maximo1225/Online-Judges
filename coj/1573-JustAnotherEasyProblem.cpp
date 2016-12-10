#include <iostream>
#include <string>
using namespace std;
string s;
int num(char c)
{
	if(c>='0' && c<='9')
		return c-'0';
	return 10+(c-'A');
}
int main() 
{
	int t,k,i,j;
	long long n,pow;
	cin>>t;
	for(k=1;k<=t;k++)
	{
		cin>>s;
		pow=1;
		n=0;
		for(i=s.size()-1;i>=0;i--)
		{
			n=n+pow*num(s[i]);
			pow=pow*16;
		}
		if(n%2==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
 
	}
 
	// your code goes here
	return 0;
}
