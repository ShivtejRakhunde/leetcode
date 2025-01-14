class Solution {
    public int[] findThePrefixCommonArray(int[] A, int[] B) {
        int k = 0;
        int n = A.length;
        int[] C = new int[n];
        int[] Fr = new int[n+1];
        //Fr.Fill(0);

        for(int i=0; i<n; i++){
            if(++Fr[A[i]] == 2){
                k++;
            }
            if(++Fr[B[i]] == 2){
                k++;
            }

            C[i] = k;
        }
        return C;
    }
}