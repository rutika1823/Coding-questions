// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	

string fractionToDecimal(int numerator, int denominator) {
    string res; bool sign=false;
    if((numerator<0 && denominator>=0)|| (numerator>=0 && denominator<0)) sign=true;
    
    numerator=abs(numerator);
    denominator=abs(denominator);
    long long q=numerator/denominator;
    long long r=numerator%denominator;
    res+=to_string(q);
    
    if(sign==true && numerator!=0) res="-"+res;
    
    if(r==0){
        return res;
    }else{
        res+=".";
        map<int,int>m;
        while(r!=0)
        {
            if(m.count(r)==1)
            {
                res=res.substr(0,m[r])+"("+res.substr(m[r])+")";
                break;
            }
            else{
                m[r]=res.length();
                r=r*10;
                q=r/denominator;
                r=r%denominator;
                res+=to_string(q);
            }
        }
    }
    return res;
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int numerator, denominator;
		cin >> numerator >> denominator;
		Solution ob;
		string ans = ob.fractionToDecimal(numerator, denominator);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends