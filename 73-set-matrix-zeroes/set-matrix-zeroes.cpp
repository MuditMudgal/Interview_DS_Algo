class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        int brr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                brr[i][j] = arr[i][j];
            }
        }
        //traversing in brr and filling rows and cols to zero in arr
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(brr[i][j]==0){
                    // filling 0 to ith row
                    for(int k=0;k<m;k++){
                        arr[i][k] = 0;
                    }
                    // filling 0 to jth col
                    for(int t=0;t<n;t++){
                        arr[t][j] = 0;
                    }
                }
            }
        }
    }
};