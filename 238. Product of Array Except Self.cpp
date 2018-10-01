class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int n= nums.size();
        if(nums.size()==1)
        {
            ans.push_back(1);
            return ans;
        }
        int left[n],right[n];
        int temp=1;
        for(int i=0;i<n;i++)
        {
            left[i] = nums[i]*temp;
            temp *=nums[i];
        }
        temp=1;
        for(int i=n-1;i>=0;i--)
        {
            right[i]=nums[i]*temp;
            temp*=nums[i];
        }
        ans.push_back(right[1]);
        for(int i=1;i<n-1;i++)
        {
            ans.push_back(left[i-1]*right[i+1]);
        }
        ans.push_back(left[n-2]);
        return ans;
        
    }
};
