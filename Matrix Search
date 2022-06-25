#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{ int n1 , n2,k;
cin>>n1>>n2>>k;
int a[n1][n2];
for(int i=0 ; i<n1 ;i++)
{
    for(int j =0;j<n2;j++)
    {
        cin>>a[i][j];
    }
}
cout<<"m"<<endl;
int r=0 , c=n2-1;
bool flag;
while(r<n1 && c>=0)
{

    if(a[r][c]==k) { flag=true;break;}


    else if( a[r][c]>k) { c--;} //going left


    else { r++;} //going down
}


if(flag==true)
{
    cout<<"found";
}
else{
    cout<<"not found";
}


 return 0;
}
