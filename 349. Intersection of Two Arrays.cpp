class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>ans;
        vector<int>v;
        for(int i=0;i<nums1.size();i++)
            ans.insert(nums1[i]);
        for(int i=0;i<nums2.size();i++)
        {
            if(ans.find(nums2[i])!=ans.end())
                v.push_back(nums2[i]);
        }
        
        set<int> s1( v.begin(), v.end() );
        v.assign( s1.begin(), s1.end() );
        return v;
    }
};
