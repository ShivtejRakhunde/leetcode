class Solution {
    public int minChanges(String s) {
        int k = 0;
        int n = s.length();
        for(int i=0; i<n; i+=2){
            if(s.charAt(i)=='0' && s.charAt(i+1)=='1' || s.charAt(i)=='1' && s.charAt(i+1)=='0'){
                k++;
            }
        }
        return k;
    }
}