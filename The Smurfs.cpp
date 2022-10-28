//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findMin(int n, char a[]){
        // code here
        
        int R=0,G=0,B=0;
    for(int i=0;i<n;i++)
    {
        if (a[i]=='R') R++;
         else if (a[i]=='G') G++;
          else if (a[i]=='B') B++;
        
    }
    
    if(G==n || B==n || R==n)
    {
        return n;
    }
    
    if ( G%2==0 && B%2==0 && R%2==0)
    {
        return 2;
    }
    
    else if ( G%2!=0 && B%2!=0 && R%2!=0)
    {
        return 2;
    }
    
    else return 1;
    
    
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        cout<<ob.findMin(n, a)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
