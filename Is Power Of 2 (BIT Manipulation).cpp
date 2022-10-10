#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool ispower2(int n)
{
    return (n&&(n&(n-1))!=0);
}
int main(){

   int n ;
   cin>>n;
   if(ispower2(n)==1) cout<<"False";
   else cout<<"true";

    return 0;

}
