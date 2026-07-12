class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        
        int maj1 = INT_MIN;
        int count1 = 0;

        int maj2 = INT_MIN;
        int count2 = 0;

        for(int i=0;i<n;i++){
            if(nums[i]==maj1){
                count1++;
            }
            else if(nums[i]==maj2){
                count2++;
            }
            else if(count1==0){
                maj1 = nums[i];
                count1++;
            }
            else if(count2==0){
                maj2 = nums[i];
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        //verification
        int actualcount1 = 0;
        int actualcount2 = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==maj1) actualcount1++;
            if(nums[i]==maj2) actualcount2++;
        }

        vector<int> result;
        if(actualcount1>n/3) result.push_back(maj1);
        if(actualcount2>n/3) result.push_back(maj2);
        return result;

    }
};