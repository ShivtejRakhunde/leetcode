class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char> lst;
        //for optimized calculation we add each character once only
        for(char c: s){
            lst.insert(c);
        }

        int ans = 0;
        //check first and last occurance of each char
        for(char ltr: lst){
            int i = -1, j = 0;

            for(int k=0; k<s.size(); k++){
                if(s[k]==ltr){
                    if(i == -1){
                        i = k;
                    }
                    j = k;
                }
            }

            unordered_set<char> btwn;
            for(int p=i+1; p<j; p++){
                btwn.insert(s[p]);
            }

            ans += btwn.size();
        }

        return ans;
    }
};