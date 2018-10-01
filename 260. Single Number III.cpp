class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int res=0;
        vector<int>ans;
        int i;
        for(i=0;i<nums.size();i++)
        {
            res = res^nums[i];
        }
       int mask = res & ~(res-1);
        int f=0;
        int s=0;
        for(i=0;i<nums.size();i++)
        {
            if((nums[i]&mask)>0)
                f=f^nums[i];
            else
                s=s^nums[i];
        }
        ans.push_back(f);
        ans.push_back(s);
        return ans;
    }
};
