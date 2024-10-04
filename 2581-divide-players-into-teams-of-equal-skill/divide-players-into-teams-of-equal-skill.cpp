class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        int n = skill.size();
        long long totalChem = 0;
        int cChem = 0;
        int tChem = skill[0] + skill[n-1];
        for(int i=0;i<n/2;i++){
            cChem = skill[i]+skill[n-1-i];
            if(cChem!=tChem){
                return -1;
            }
            totalChem += (long long)skill[i]*(long long)skill[n-1-i];
        }
        return totalChem;
    }
};