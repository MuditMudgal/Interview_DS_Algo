class Solution {
public:
    void combination(vector<vector<int>>& finalAns, vector<int> v, vector<int>& candidates, int target, int idx){
        if(target==0){
            finalAns.push_back(v);
            return;
        }
        if(target<0) return;
        //jitni ele utni calls
        for(int i=idx;i<candidates.size();i++){
            v.push_back(candidates[i]);
            combination(finalAns,v,candidates,target-candidates [i],i); //target-arr[i] to remove coin we spent from target totl
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> finalAns;
        vector<int> v;
        combination(finalAns,v,candidates,target,0);

        return finalAns;

    }
};