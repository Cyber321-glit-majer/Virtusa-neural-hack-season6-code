#include <iostream>
#include <string>
using namespace std;
 
int findMaxCoins(int coin[], int i, int j)
{
     if (i == j) {
        return coin[i];
    }
 
     if (i + 1 == j) {
        return max(coin[i], coin[j]);
    }
  
 
    int start = coin[i] + min(findMaxCoins(coin, i + 2, j),
                            findMaxCoins(coin, i + 1, j - 1));
  
    int end = coin[j] + min(findMaxCoins(coin, i + 1, j - 1),
                    findMaxCoins(coin, i, j - 2));
 
     return max(start, end);
}
 
int main()
{
   int n;
   cin>>n;
   int coin[n];
    for(int i=0;i<n;i++)
    {
        cin>>coin[i];
    }
 
    
         cout<< findMaxCoins(coin, 0, n - 1);
 
    return 0;
}
