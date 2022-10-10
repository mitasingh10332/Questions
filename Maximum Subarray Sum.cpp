#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{ //Maximum Subarray Sum

  int n, maxsum=INT_MIN;
  cin>>n;
  int ar[n];
  for(int i=0; i<n;i++)
  {
      cin>>ar[i];
  }

  for(int i=0; i<n;i++)
  {
      for(int j =i ; j<n ; j++)
      {int cs=0;
          for(int k=i ; k<=j ; k++)
          {
              cs+=ar[k];

          }
          maxsum=max(cs,maxsum);
      }
  }
  cout<<maxsum;


 return 0;
}
