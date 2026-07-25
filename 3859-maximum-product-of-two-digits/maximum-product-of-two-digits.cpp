class Solution {
public:
    int maxProduct(int n) {
        vector<int> v;
        while(n>0){
            v.push_back(n%10);
            n=n/10;
        }
        sort(v.begin(), v.end());
        int max1 = -1;
        int max2 = -1;
        for(int i=v.size()-1;i>=0;i--){
            max1 = v[i];
            max2 = v[i-1];
            break;
        }
        return max1*max2;
    }
};