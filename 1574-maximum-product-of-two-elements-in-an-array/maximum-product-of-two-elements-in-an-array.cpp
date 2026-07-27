class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max = INT_MIN;
        int smax = INT_MIN;
        int maxidx = -1;
        //finding max
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max = nums[i];
                maxidx = i;
            }
        }
        //finding smax
        for(int i=0;i<n;i++){
            if(nums[i]>smax && maxidx!=i)  smax = nums[i];
        }
        return (max-1)*(smax-1);
    }
};

// i=1 j=2  (5-1)(4-1)= 12