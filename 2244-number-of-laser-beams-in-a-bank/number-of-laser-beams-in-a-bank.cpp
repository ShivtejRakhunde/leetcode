class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> countB;

        for(auto& t: bank){
            int k = count(t.begin(), t.end(), '1');
            if(k>0){
                countB.push_back(k);
            }
        }

        int ans = 0, n = countB.size();

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