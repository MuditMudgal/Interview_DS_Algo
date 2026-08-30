class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minElem = INT_MAX;
        int minIdx = -1; 
        for(int i=0;i<n;i++){
            if(nums[i]<minElem){
                minElem = nums[i];
                minIdx = i;
            }
        }
        int maxElem = INT_MIN;
        int maxIdx = -1;
        for(int i=0;i<n;i++){
            if(nums[i]>maxElem){
                maxElem = nums[i];
                maxIdx = i;
            }
        } 

        //leftside and rightside
        int leftIdx = min(minIdx,maxIdx);
        int rightIdx = max(minIdx,maxIdx);

        return min({leftIdx+1+n-rightIdx, rightIdx+1, n-leftIdx});
    }
};