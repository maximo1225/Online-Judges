#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int sort_array(int array[],int score){
    int temp, count = 0;
    for(int i=0;i<score;i++){
        for(int j=i+1 ;j<score;j++){
            if(array[i]>array[j]){
                count++;
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
                   	
            }

        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
	int p, ans;
	cin >> p;
	int lista[p][20];

	
		for (int j = 0; j < p; ++j)
		{
			for (int k = 1; k < 20; ++k)
			{
				cin >> lista[j][k];
			}
		}

		for (int i = 0; i < p; ++i)
		{
			cout << i+1 <<" " << sort_array(lista[i], 20) << endl;
		}
		
		

			

	return 0;
	
}