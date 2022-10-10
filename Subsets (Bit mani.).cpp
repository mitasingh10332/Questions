#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subsets(int ar[],int n){
    for(int i=0; i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j) )
            {
                cout<<ar[j];
            }

        }
        cout<<endl;
    }

}
int main()
{ //printing all the subsets of an array

  int n;
  cin>>n;
  int ar[n];
  for(int i=0; i<n;i++)
  {
      cin>>ar[i];
  }

  subsets(ar ,n);


 return 0;
}
