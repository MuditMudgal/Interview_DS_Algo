class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cd = NULL;
        int count = 0;
        for(int i=0;i<n;i++){
            if(count==0){
                cd = nums[i];
                count++;
            }
            else if(nums[i]==cd) count++;
            else count--;
        }
        return cd;
    }
};