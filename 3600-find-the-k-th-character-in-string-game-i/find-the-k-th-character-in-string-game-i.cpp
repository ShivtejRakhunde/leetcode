class Solution {
public:
    char kthCharacter(int k) {
        int ans = 0;
        k--;
        while(k){
            ans += k & 1;
            k >>= 1;
        }
        return (ans%26) + 'a';
    }
};