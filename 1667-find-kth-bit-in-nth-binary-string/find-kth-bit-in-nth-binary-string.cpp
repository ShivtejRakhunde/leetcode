class Solution {
public:
    string invert(string s) {
        for (char &c : s) {
            c = (c == '0') ? '1' : '0';
        }
        return s;
    }

    string reverse(string s) {
        std::reverse(s.begin(), s.end());
        return s;
    }
    
    char findKthBit(int n, int k) {
        string s = "0";
        for(int i=1;i<n;i++){
            string inverted = invert(s);
            string reversedInverted = reverse(inverted);
            s = s + "1" + reversedInverted;
        }
        return s[k-1];
    }
};