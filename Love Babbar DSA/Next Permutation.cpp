class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
      if(nums.size()==1)
      {
          return;
      }
        
       int idx1=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                idx1=i;
                break;
            }
        }
        
        if(idx1<0) {
            reverse(nums.begin(),nums.end());
            return;
        }
        
        
        for(int i=n-1;i>=0;i--)
            {
                if (nums[i]>nums[idx1])
                {
                    swap(nums[i],nums[idx1]);
                    break;
                }
            }
            
            sort(nums.begin()+idx1+1,nums.end());
        }
        
        
    
};
