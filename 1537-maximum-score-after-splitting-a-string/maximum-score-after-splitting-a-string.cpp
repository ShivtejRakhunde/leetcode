class Solution {
public:
    int maxScore(string s) {
        int score = 0;

        for(int i=0; i<s.length()-1; i++){
            int curntScore = 0;
            for(int j=0; j<=i; j++){
                if(s[j]=='0'){
                    curntScore++;
                }
            }
            for(int j=i+1; j<s.length(); j++){
                if(s[j]=='1'){
                    curntScore++;
                }
            }
            score = max(score, curntScore);
        }
        return score;
    }
};