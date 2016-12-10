#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y){return x.first < y.first;}
int main(){
    int n, d;cin >> n >> d;
    int a, b;cin >> a >> b;
    int low, high;

    pair<int, int> arr[n];
    for(int i=0;i<n;i++){
        cin >> low >> high;
        arr[i].first = (low*a)+(high*b);
        arr[i].second = i;
    }

    sort(arr, arr+n, cmp);
    long long test = 0, ans=0;
    for(int i=0;i<n && test<=d;i++){
        test += arr[i].first;
        if(test<=d)ans++;
    }

   	cout << ans << endl;

    for(int i=0;i<ans;i++)
      cout << arr[i].second+1 << " ";
    return 0;
}
