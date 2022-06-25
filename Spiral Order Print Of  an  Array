#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{ //spiral order print of array

    int n,m;
    cin>>n>>m;
    int ar[n][m];

    for(int i=0;i<n;i++)
    {
        for (int j=0 ; j<m; j++)
        {
            cin>>ar[i][j];
        }
        cout<<"\n";
    }


    //for spiral order

    int row_start=0, row_end=n-1, column_start=0, column_end=m-1;

    while (row_start<=row_end && column_start <= column_end){

    //row_start
    for(int col= column_start ; col<=column_end; col++ )
    {
        cout<<ar[row_start][col]<<" ";
    }
    row_start++;

    //column_end
    for(int row=row_start; row <=row_end ;row++)
    {
        cout<<ar[row][column_end]<<" ";
    }
    column_end--;

    //row_end
    for(int col=column_end ; col>=column_start; col--)
    {
        cout <<ar[row_end][col]<<" ";
    }
    row_end--;

    //column start
    for(int row=row_end; row>=row_start;row--)
    {
        cout<< ar[row][column_start]<<" ";
    }
    column_start++;


    }
 return 0;
}
