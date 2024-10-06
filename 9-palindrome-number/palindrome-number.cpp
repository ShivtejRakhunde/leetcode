class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        else{
        int num = x; 
        long sum = 0, n;
        while(x != 0){
            n = x % 10;
            sum = 10 * sum + n;
            x = x / 10;
        }
        if(sum == num){
            return true;
        }
        else{
            return false;
        }
    }
    }
};