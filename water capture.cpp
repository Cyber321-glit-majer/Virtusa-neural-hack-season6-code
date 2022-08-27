

#include <bits/stdc++.h>
using namespace std;

#define max(x, y) (((x) > (y)) ? (x) : (y))

#define min(x, y) (((x) < (y)) ? (x) : (y))

int maxWater(int arr[], int n)
{
	
	int res = 0;

	for (int i = 0; i < n; i++) {

		int left = arr[i];
		for (int j = 0; j < i; j++) {
			left = max(left, arr[j]);
		}

		int right = arr[i];
		for (int j = i + 1; j < n; j++) {
			right = max(right, arr[j]);
		}

		res = res + (min(left, right) - arr[i]);
	}

	return res;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
	printf("%d", maxWater(arr, n));
	return 0;
}

