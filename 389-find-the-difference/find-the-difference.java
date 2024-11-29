class Solution {
    public char findTheDifference(String s, String t) {
        char extraChar = 0;
        for(int i=0; i<s.length(); i++){
            extraChar = (char) (extraChar ^ s.charAt(i)); // XOR 
        }
        for(int i=0; i<t.length(); i++){
            extraChar = (char) (extraChar ^ t.charAt(i));
        }
    return extraChar;
    }
}