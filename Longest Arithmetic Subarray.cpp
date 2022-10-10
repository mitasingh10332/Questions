#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
  //longest arithmetic subarray
  int n;
  cin>>n;
  int ar[n];
  for(int i=0; i<n;i++)
  {
      cin>>ar[i];
  }

  int ans=2;
  int j=2;
  int pd=ar[1]-ar[0];
  int current=2;

  while(j<n)
  {
      if(pd==ar[j]-ar[j-1])
      {
          current++;
      }

      else
      {
          pd=ar[j]-ar[j-1];
          current=2;
      }

      ans=max(ans,current);
      j++;

  }
  cout<<endl<<ans;
    return 0;
}
