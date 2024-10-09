class Solution {
public:
    int minAddToMakeValid(string s) {
        //stack<char> st;
        int k1=0, k2=0;
        for(char c:s){
            if(c=='('){
                k1++;
            }
            else{
                if(k1>0){
                    k1--;
                }
                else{
                    k2++;
                }
            }
        }
        return k1+k2;
    }
};