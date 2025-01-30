class Solution {
public:
    string shortestPalindrome(string s) {
        int length = s.length();
        string rs = s;
        reverse(rs.begin(),rs.end());

        for(int i=0;i<length;i++){
            if(!memcmp(s.c_str(), rs.c_str()+i, s.size()-i)){
                return rs.substr(0,i)+s;
            }
        }
        return rs+s;
    }
};