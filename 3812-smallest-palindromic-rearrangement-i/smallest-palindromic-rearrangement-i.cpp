class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        //find half
        int mid = n/2;
        //sort till mid 
        sort(s.begin(), s.begin()+mid);
        //replace first and last element 
        for(int i=0;i<mid;i++){
            s[n-1-i] = s[i];
        }

        return s;
    }
};