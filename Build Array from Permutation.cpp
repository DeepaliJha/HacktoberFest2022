class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        auto it=nums.begin();
        vector<int> ans;
        for(it=nums.begin();it!=nums.end();it++)
        {
int a=*(it);
            int b=nums[a];
            ans.push_back(b);
            
        }
        return ans;
        
    }
};
