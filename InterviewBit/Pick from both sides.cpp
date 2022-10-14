int Solution::solve(vector<int> &A, int B) {
 
    int n1=A.size();
    int sum=0,i=0, j=n1-B-1,sum2=0;
    int m=0;
    for(m;m<n1;m++)
    {
        sum=sum+ A[m];        
    }
    
    int k=i;
    for(k;k<=j;k++)
    {
        sum2=sum2+A[k];        
    }
    int min1=sum2;
    i++;j++;
    
    while(j<n1)
    {
        sum2=sum2+A[j]-A[i-1];
        min1=min(min1,sum2);
        i++; j++;             
    }
    
    return (sum-min1);
    
    

}
