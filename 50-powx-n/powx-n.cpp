class Solution {
public:
    double myPow(double x, int n) {
        double s = 1;
        long long num = n;
        if(num==0){
            return 1;
        }
        if(num < 0){
            num = -static_cast<long long>(n);
            x = 1 / x;
        }
        while(num > 0){
            if (num % 2 == 1) {
                s = s * x;
            }
            x *= x;
            num /= 2;
        }
            return s;
    }
};