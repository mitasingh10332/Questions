#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{ //maximum subarray sum

  int n, maxsum=INT_MIN,sum=0;
  cin>>n;
  int ar[n];
  for(int i=0; i<n;i++)
  {
      cin>>ar[i];
  }
int csum[n+1];
csum[0]=0;
for(int i=1; i<=n;i++)
  {
      csum[i]=csum[i-1]+ar[i];
  }

  for(int i=1 ; i<=n ; i++)
  {
      for(int j=0 ; j<n;j++)
      {
          sum=csum[i]-csum[j];
          maxsum=max(maxsum,sum);
      }
  }
cout<<maxsum;
 return 0;
}
