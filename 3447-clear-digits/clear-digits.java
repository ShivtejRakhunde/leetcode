class Solution {
    public String clearDigits(String s) {
        StringBuilder ans = new StringBuilder();

        //if current char is digit and ans is not empty then pop last one from ans
        for(int ci = 0; ci<s.length(); ci++){
            if(Character.isDigit(s.charAt(ci)) && ans.length()!=0){
                ans.setLength(ans.length()-1);
            }
            //if char is not digit then add it to ans
            else{
                ans.append(s.charAt(ci));
            }
        }
        return ans.toString();
    }
}