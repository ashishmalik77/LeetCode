class Solution {

public:
 
    
    string largestNumber(vector<int>& nums) {
        vector<string>ans;
       string s;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(to_string(nums[i]));
        }
        sort(ans.begin(),ans.end(),compareNum);
        for(auto i:ans)
        {
            s = s+i;
        }
       
        int j=0;
        while(s[j]=='0' && j+1 < s.size())
        {
            j++;
        }
        
        return s.substr(j);
        }
private:
static bool compareNum(string a, string b) {
    return a + b > b + a;
}
   
};