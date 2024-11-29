class Solution {
public:
    char findTheDifference(string s, string t) {
        char extraChar = 0;
        for(char i : s){
            extraChar = extraChar ^ i; // XOR 
        }
        for(char i : t){
            extraChar = extraChar ^ i;
        }
    return extraChar;
    }
};