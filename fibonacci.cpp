#include<bits/stdc++.h>
using namespace std;

int fibbo(int n)
{
    if (n==0 || n==1 ) {return n;}
    return fibbo(n-1)+fibbo(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fibbo(n);
    
    return 0;
}
