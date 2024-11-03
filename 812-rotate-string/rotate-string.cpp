class Solution {
public:
    bool rotateString(string s, string goal) {
        char l;
        int i, n = s.length();
        for(i=0;i<n;i++){
            l = s[n-1];
            s.erase(n-1,1);
            s = l + s;
            if(s == goal){
                return true;
            }
        }
        return false;
    }
};