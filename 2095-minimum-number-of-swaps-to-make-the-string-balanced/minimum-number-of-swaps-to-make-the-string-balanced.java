class Solution {
    public int minSwaps(String s) {
        Stack<Character> st = new Stack();
        int unb = 0;
        for(int i=0;i<s.length();i++){
            char c = s.charAt(i);
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
}