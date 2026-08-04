class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();

        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>maxi) maxi = nums[i];
            if(mini>nums[i]) mini = nums[i]; 
        }
      
        vector<int> ans;
        for(int i=mini+1;i<maxi;i++){
            
            //search traverse
            bool flag = false;
            for(int j=0;j<n;j++){
                if(i==nums[j]){
                    flag=true;
                    break;
                }
            }

            if(flag==false){
                ans.push_back(i);
            }
        }
        return ans;
    }
};