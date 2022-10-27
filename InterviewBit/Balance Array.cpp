int Solution::solve(vector<int> &A) {
    int odd = 0;
    int even = 0;
    int right_odd = 0;
    int right_even = 0;
    for(int i = 0; i < A.size(); ++i)
    {
        if( i % 2 == 0)
        {
            right_even += A[i];
        }
        else
        {
            right_odd += A[i];
        }
    }
    int count = 0;
    for(int i = 0; i < A.size(); ++i)
    {
        if(i % 2 == 0)
        {
            right_even -= A[i];
            if(odd + right_even == even + right_odd)
            {
                ++count;
            }
            even += A[i];
        }
        else
        {
            right_odd -= A[i];
            if(odd + right_even == even + right_odd)
            {
                ++count;
            }
            odd += A[i];
        }
    }
    return count;
}
