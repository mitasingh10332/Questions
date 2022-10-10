#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{ //maximum subarray sum , ans>0

  int n, maxsum=INT_MIN,csum=0;
  cin>>n;
  int ar[n];
  for(int i=0; i<n;i++)
  {
      cin>>ar[i];
  }
  for(int i=0;i<n;i++)
  {
      csum+=ar[i];
      if(csum<0)
      {
          csum=0;
      }
      maxsum=max(maxsum,csum);
  }
  cout<<maxsum;
 return 0;
}
