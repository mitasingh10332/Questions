#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int GetBit(int ar,int pos)
{
    return (ar&(1<<pos))!=0;
}

void uniqueNo(int ar[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
         xorsum=xorsum^ar[i];
    }

    int tempxor=xorsum;
    int getbit=0,pos=0;
    while (getbit!=1)
    {
        getbit=xorsum & 1;
        xorsum=xorsum>>1;
        pos++;

    }

    int newxor=0;
    for(int i=0;i<n;i++)
    {
        if(GetBit(ar[i],pos-1))
        {
            newxor=newxor^ar[i];
        }
    }

    cout<<newxor<<"  "<<(tempxor^newxor)<<endl;


}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
   uniqueNo(ar,n);

 return 0;
}
