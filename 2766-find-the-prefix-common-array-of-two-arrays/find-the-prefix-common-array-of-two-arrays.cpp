class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int k = 0;
        vector<int> C(A.size()), Fr(A.size()+1, 0);

        for(int i=0; i<A.size(); i++){
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
};