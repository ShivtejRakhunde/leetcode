class Solution {
    public int maxScore(String s) {
        int score = 0;

        for(int i=0; i<s.length()-1; i++){
            int curntScore = 0;
            for(int j=0; j<=i; j++){
                if(s.charAt(j)=='0'){
                    curntScore++;
                }
            }
            for(int j=i+1; j<s.length(); j++){
                if(s.charAt(j)=='1'){
                    curntScore++;
                }
            }
            score = Math.max(score, curntScore);
        }
        return score;
    }
}