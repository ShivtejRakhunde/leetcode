class Solution {
public:
    string clearDigits(string s) {
        string ans = "";

        //if current char is digit and ans is not empty then pop last one from ans
        for(int ci = 0; ci<s.length(); ci++){
            if(isdigit(s[ci]) && !ans.empty()){
                ans.pop_back();
            }
            //if char is not digit then add it to ans
            else{
                ans += s[ci];
            }
        }
        return ans;
    }
};