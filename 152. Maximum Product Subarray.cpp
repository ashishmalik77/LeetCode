// Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.

Example 1:

Input: [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.

Example 2:

Input: [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxf=INT_MIN,maxb=INT_MIN;
        int ans =1;
        for(int i=0;i<n;i++)
        {
            ans = ans *nums[i];
            maxf = max(maxf,ans);
            if(nums[i]==0)
            {
                ans=1;
            }
        }
        ans =1;
        for(int i=n-1;i>=0;i--)
        {
            ans = ans *nums[i];
            maxb = max(maxb,ans);
            if(nums[i]==0)
            {
                ans=1;
            }
        }
        
        return max(maxf,maxb);
        

    }
};
