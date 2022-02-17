
#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
     int sum=0;
     int ans;
     for(int i=0; i<n-1; i++){
         sum = sum + array[i];
     }
     ans=(n*(n+1)/2)-sum;
     return ans;
    }  
   
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cout<<"enter n";
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            cout<<"Enter the elements";
            cin >> array[i];
        }
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  