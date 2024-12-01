class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i, j;
        for(int i=0; i<arr.size(); i++){
            j = 0;
            while(j<arr.size()){
                if(arr[i]==2*arr[j] && i!=j){
                    return true;
                }
                j++;
            }
        }
        return false;
    }
};