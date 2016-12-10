#include <stdio.h>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int neword[ 30 ],rev[30],year,n;
char ord[ 30 ];
string arr[ 30 ];
int main(){
    while( scanf("%d",&n) && n ){
        cin >> ord; year++;
        for( int i = 0 ; i < strlen( ord ) ; i++ ){
            neword[ ord[i] - 'A' ] = i;
            rev[ i ] = ord[i] - 'A';
        }
        for( int i = 0 ; i < n ; i++ ){
           cin >> arr[ i ];
           for( int j = 0 ; j < arr[i].size() ; j++ ){
                arr[i][j] = char( neword[ arr[i][j] - 'A' ] + 'A');
           }
        }
        sort( arr , arr + n );
        cout << "year " << year << endl;
        for( int i = 0 ; i < n ; i++ ){
            for( int j = 0 ; j < arr[i].size() ; j++ ){
                arr[i][j] = char(rev[ arr[i][j] - 'A' ] + 'A');
            }
            cout << arr[i] << endl;
        }
    }
}
