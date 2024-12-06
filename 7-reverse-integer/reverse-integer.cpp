class Solution {
public:
    int reverse(int x) {
        int digit, sum;
        sum = 0;
        while(x!=0){
            digit = x % 10;
            if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && digit > 7)) {
                return 0; // Positive overflow
            }
            if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && digit < -8)) {
                return 0; // Negative overflow
            }
            sum = sum * 10 + digit;
            x = x / 10;
        }
        return sum;
    }
};