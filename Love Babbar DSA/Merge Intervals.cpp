class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>>res;
        
        sort(intervals.begin(),intervals.end(),[](vector<int>&a , vector<int>&b)
             {
                 return a[0]<b[0];
             });
        
        vector<int>current=intervals[0];
        for(int i=0;i<intervals.size();i++)
        {
            if(current[1]>=intervals[i][0])
            {
                current[1]=max(current[1],intervals[i][1]);
               
            }
            
            else{
                res.push_back(current);
                current=intervals[i];
                
            }
        }
        
        res.push_back(current);
        return res;
        
    }
};
