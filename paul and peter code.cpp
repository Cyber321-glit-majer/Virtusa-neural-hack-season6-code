
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int minSum(int ar[], int n)
{
	
	if (n <= 4)
		return *min_element(ar, ar + n);


	int sum[n];
	sum[0] = ar[0];
	sum[1] = ar[1];
	sum[2] = ar[2];
	sum[3] = ar[3];

	for (int i = 4; i < n; i++)
		sum[i] = ar[i] + (*min_element(sum + i - 4, sum + i));

	return *min_element(sum + n - 4, sum + n);
}

int main()
{
    int n;
    cin>>n;
	int ar[n];for(int i=0;i<n;i++)
	{
	    cin>>ar[i];
	}
	
	cout <<minSum(ar, n);
	return 0;
}
