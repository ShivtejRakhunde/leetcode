class Solution {
    public int minAddToMakeValid(String s) {
        int k1=0, k2=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='('){
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
}