class Solution {
public:
    bool checkpartition(string sq, int target){
        //check if valid partition found
        if(sq == "" && target == 0){
            return true;
        }
        if(target<0){
            return false;
        }
        // Recursively check all partitions for a valid partition
        for(int i=0; i<sq.size(); i++){
            string left = sq.substr(0, i+1);
            string right = sq.substr(i+1);
            int leftnum = stoi(left);

            if(checkpartition(right, target-leftnum)){
                return true;
            }
        }
        return false;
    }
    
    int punishmentNumber(int n) {
        int ans = 0;

        for(int i=1; i<=n; i++){
            int sq = i*i;
            if(checkpartition(to_string(sq), i)){
                ans += sq;
            }
        }
        return ans;
    }
};