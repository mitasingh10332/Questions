#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kadane(int ar[],int n)
{int  maxsum=INT_MIN;
  int csum=0;
    for(int i=0;i<n;i++)
  {
      csum+=ar[i];
      if(csum<0)
      {
          csum=0;
      }
      maxsum=max(maxsum,csum);
  }
  return maxsum;
}

int main()
{ //maximum circular subarray sum

  int n,csum=0,totalsum=0,maxsum=INT_MIN;
  cin>>n;
  int ar[n];
  for(int i=0; i<n;i++)
  {
      cin>>ar[i];
      totalsum+=ar[i];
  }

    int unwrappedsum=kadane(ar,n);
  for(int i=0; i<n;i++)
  {
      ar[i]=-ar[i];
  }
  int wrappedsum= totalsum - (-kadane(ar,n));
  maxsum=max(wrappedsum,unwrappedsum);

  cout<<maxsum;
 return 0;
}
