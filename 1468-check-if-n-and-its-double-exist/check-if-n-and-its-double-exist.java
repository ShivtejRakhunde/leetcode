class Solution {
    public boolean checkIfExist(int[] arr) {
        int i, j;
        for(i=0; i<arr.length; i++){
            j = 0;
            while(j<arr.length){
                if(arr[i]==2*arr[j] && i!=j){
                    return true;
                }
                j++;
            }
        }
        return false;
    }
}