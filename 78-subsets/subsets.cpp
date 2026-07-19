class Solution {
public:
    void helper(vector<int>& nums, vector<int> ans, int idx, vector<vector<int>>& finalAns){
        // int n = nums.size();
        if(idx==nums.size()){
            finalAns.push_back(ans);
            return;
        }
        helper(nums,ans,idx+1,finalAns);
        ans.push_back(nums[idx]);
        helper(nums,ans,idx+1,finalAns);
    }   
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalAns;
        helper(nums,ans,0,finalAns);
        return finalAns;
    }
};