void rotate(int arr[], int n)
{
    
    int temp[n];
    
    for (int i=0;i<n;i++)
    {
        temp[(i+1)%n]=arr[i];
    }
    
    for (int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }
    
}
