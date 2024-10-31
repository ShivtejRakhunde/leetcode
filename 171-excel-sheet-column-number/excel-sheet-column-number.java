class Solution {
    public int titleToNumber(String columnTitle) {
        int num = 0;
        for(int c=0; c<columnTitle.length(); c++){
            num = num*26 + (columnTitle.charAt(c) - 'A' + 1);
        }
        return num;
    }
}