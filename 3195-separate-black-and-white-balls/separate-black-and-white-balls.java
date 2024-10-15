class Solution {
    public long minimumSteps(String s) {
        long k=0;
        long b=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='0'){
                k += b;
            }
            else{
                b++;
            }
        }
        return k;
    }
}