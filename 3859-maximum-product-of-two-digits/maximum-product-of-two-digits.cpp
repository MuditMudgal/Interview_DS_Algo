class Solution {
public:
    int maxProduct(int n) {
        string str = to_string(n);
        sort(str.begin(),str.end());
        int max1 = -1;
        int max2 = -1;
        for(int i=str.size()-1;i>=0;i--){
            max1 = str[i]-'0';
            max2 = str[i-1]-'0';
            break;
        }
        return max1*max2;
    }
};