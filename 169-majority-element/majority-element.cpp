class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cd = nums[0];
        int count = 1;
        for(int i=1;i<n;i++){
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