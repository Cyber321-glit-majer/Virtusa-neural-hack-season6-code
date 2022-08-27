
#include <bits/stdc++.h>
using namespace std;

int longest_substring(string s, int k)
{
	int n = s.size();
	
	if(k>1)
	{
		s += s;
		n *= 2;
	}
	
	int ans = 0;
	
	int i = 0;
	while (i < n)
	{
		int x = 0;
		
		while (s[i] == '0' && i < n)
			x++, i++;
		ans = max(ans, x);
		i++;
	}
	
	if(k==1 or ans!=n)
		return ans;
		
	else
		return (ans/2)*k;
}


int main()
{
    int k;
    cin>>k;
	string s;
	cin>>s;
	


	cout << longest_substring(s, k);
	
	return 0;
}
