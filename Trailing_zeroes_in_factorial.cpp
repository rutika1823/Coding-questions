// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
  
    int trailingZeroes(int N){
    int totalzeroes =0;
    int div=5;
    while(N >= div){
        totalzeroes = totalzeroes + N/div;
        div = div*5;
    }

    return totalzeroes;

    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans  = ob.trailingZeroes(N);
        cout<<ans<<endl;
    }
    return 0;
}  // } Driver Code Ends