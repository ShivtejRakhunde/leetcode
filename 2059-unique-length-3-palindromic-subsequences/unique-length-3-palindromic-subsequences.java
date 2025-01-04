import java.util.HashSet;

class Solution {
    public int countPalindromicSubsequence(String s) {
        HashSet<Character> uniqueChars = new HashSet<>();
        
        // Store all unique characters in the string
        for (char c : s.toCharArray()) {
            uniqueChars.add(c);
        }
        
        int result = 0;
        
        // Process each unique character
        for (char ltr : uniqueChars) {
            int first = -1, last = 0;
            
            // Find the first and last occurrences of the current character
            for (int k = 0; k < s.length(); k++) {
                if (s.charAt(k) == ltr) {
                    if (first == -1) {
                        first = k;
                    }
                    last = k;
                }
            }
            
            // Count unique characters between the first and last occurrences
            HashSet<Character> between = new HashSet<>();
            for (int p = first + 1; p < last; p++) {
                between.add(s.charAt(p));
            }
            
            result += between.size();
        }
        
        return result;
    }
}
