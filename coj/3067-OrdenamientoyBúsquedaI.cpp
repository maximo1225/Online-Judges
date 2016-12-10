#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
  while (l <= r)
  {
    int m = l + (r-l)/2;
 
    if (arr[m] == x) return m;

    if (arr[m] < x) l = m + 1;
 
    else r = m - 1; 
  }
  return -1; 
}


int main(){
	int n, q1, q2;scanf("%d", &n);
	int *queue = new int[n];
	for(int i = 0; i < n; i++) scanf("%d", &queue[i]);
	sort(queue, queue+n);
	scanf("%d %d", &q1, &q2);
	int *list1 = new int[q1];
	int *list2 = new int[q2];
	for(int i = 0; i < q1; i++) scanf("%d", &list1[i]);
	for(int i = 0; i < q2; i++) scanf("%d", &list2[i]);
	
	for(int i = 0; i < q1; i++){
		if(binarySearch(queue, 0, n-1, list1[i]) == -1)
			printf(":(\n");
		else printf(":)\n");
	}
	
	for(int i = 0; i < q2; i++){
		printf("%d\n", queue[list2[i]-1]);
	}
	return 0;
}
