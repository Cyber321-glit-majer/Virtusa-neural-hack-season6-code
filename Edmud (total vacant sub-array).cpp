#include<bits/stdc++.h>
using namespace std;

int calculate(int a[], int n)
{
	int ans = 0;


	for (int i = 0; i < n; i++) {

	
		int r = i + 1;


		for (int j = r; j < n; j++) {

			if (a[i] == a[j])
				r += 1;
			else
				break;
		}

	
		int d = r - i;

	
		ans += (d * (d + 1) / 2);

	
		i = r - 1;
	}


	return ans;
}
int main()
{
    int n;
    cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}

	cout << calculate(a, n);
	return 0;
}
