#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

        long long tanks, queries, prueba,max, j;
        long long liters[1000], pruebas[1000];
        
    while (scanf("%d%d",&tanks, &queries)!=EOF)
    {

        
        for(int i=0; i < tanks; i++)
        	cin >> liters[i];
        	
        for(int i=0; i < queries; i++)
        	cin >> pruebas[i];
        	
        for(int i=0; i < queries; i++){
        
        	prueba = pruebas[i];
        	

        	max=1;
        	prueba -= 1;
        	j=1;
        	while(prueba > 0 && j < tanks){
        		if(prueba >= liters[j]){
        			prueba -= liters[j];
        			max++;
        		}else{
        			break;
        		}
        		j++;
        	}
        	cout << max;
        	if(i < queries-1){
        		cout << " ";
        	}
        }
        cout << endl;
    }
    
	return 0;
}
