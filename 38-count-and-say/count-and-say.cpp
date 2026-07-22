class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        //calculate krke dega (n-1)
        string str = countAndSay(n-1);
        // "3322251" -> 23,32,15,11 <freq,string>
        string ans = "";
        int count = 1;
        for(int i=1;i<str.length();i++){
            if(str[i]==str[i-1]) count++;
            else{
                ans = ans+to_string(count);
                ans = ans+str[i-1];
                count=1;
            }
        }
        ans = ans+to_string(count);
        ans = ans+str[str.length()-1]; //ans+str[last element]
        return ans;

    }
};