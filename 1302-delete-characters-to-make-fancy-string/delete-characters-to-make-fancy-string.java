class Solution {
    public String makeFancyString(String s) {
        StringBuilder result = new StringBuilder();
        int count = 1; // Tracking consecutive occurrences of the current character

        //Starting with the first character
        result.append(s.charAt(0));

        for(int i = 1; i < s.length(); ++i){
            if(s.charAt(i) == s.charAt(i-1)) {
                count++;
            }
            else{
                count = 1;  //Reset count for a new character
            }

            // Only add character if it's less than or equal to 2 consecutive occurrences
            if(count <= 2){
                result.append(s.charAt(i));
            }
        }
        return result.toString();
    }
}