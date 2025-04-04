class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> countB; //holds '1's in each row

        for(auto& t: bank){
            int k = count(t.begin(), t.end(), '1'); //count of '1' in each string
            if(k>0){
                countB.push_back(k);    //exclude string having only '0's
            }
        }

        int ans = 0, n = countB.size();

        //should contain atleast 2 rows with security beams
        if(n<2){
            return 0;
        }
        else{
            for(int i=0; i<countB.size()-1; i++){
                ans += countB[i]*countB[i+1];
            }
        }

        return ans;
    }
};