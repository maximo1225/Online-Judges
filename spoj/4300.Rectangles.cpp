#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int n;
	int count = 0;

	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = i; j <= n; ++j)
		{
			if ((i*j) <= n) count++;
		}
	}

	cout << count << endl;
	return 0;
}