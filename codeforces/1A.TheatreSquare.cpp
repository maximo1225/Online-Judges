#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, a;
	cin >> n >> m >> a;
	
	long long lozaf = n/a;

	if(n%a) lozaf++; 
	
	long long lozac = m/a;
	
	if(m%a) lozac++;
	cout << lozaf*lozac << endl;
	return 0;
}
 
