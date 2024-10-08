class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        int unb = 0;
        for(char c:s){
            if(c=='['){
                st.push(c);
            }
            else if(c==']'){
                if(st.empty()){
                    unb++;
                }
                else{
                    st.pop();
                }
            }
        }
        return (unb+1)/2;
    }
};