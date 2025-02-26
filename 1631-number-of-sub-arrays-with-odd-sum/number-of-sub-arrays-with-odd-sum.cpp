class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int k = 0;
        int sum = 0;
        int oddk = 0;
        int evenk = 1;
        for(int j=0; j<arr.size(); j++){
            sum += arr[j];
            if(sum%2==0){
                k += oddk;
                evenk++;
            }
            else{
                k += evenk;
                oddk++;
            }
            k = k%(int)(1e9+7);
        }
        return k;
    }
};