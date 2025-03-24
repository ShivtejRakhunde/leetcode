class Solution {
public:
    int countDays(int days, vector<vector<int>>& m) {
        int ans = 0;
        sort(m.begin(), m.end());
        //stores start and end of ith meeting
        int i = -1, j = -1;

        for(auto& box: m){
            int cs = box[0], ce = box[1]; //current meetings start and end

            if(cs>j){
                ans += (j-i+1);
                i = cs;
                j = ce;
            }
            else{
                j = max(j, ce);
            }
        }
        ans += j-i+1;

        return days-ans+1;
    }
};