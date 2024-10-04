class Solution {
    public long dividePlayers(int[] skill) {
        //we will sort given vector first for easy pairing 
        Arrays.sort(skill);
        int n = skill.length;
        long totalChem = 0; //stores total chemistry calculated by multiplying individual chemistries
        int cChem = 0; //stores current chemistry of any team
        int tChem = skill[0] + skill[n-1]; //sample team chemistry

        //iterate through half of vector
        for(int i=0;i<n/2;i++){
            cChem = skill[i]+skill[n-1-i]; //store current chem of team by adding ith from start and ith form end of vector
            if(cChem!=tChem){ //if current and sample team chemistries are not equal exit
                return -1;
            }
            totalChem += (long)skill[i]*(long)skill[n-1-i]; //calculate total chemistry by adding individual team chemistry
        }
        return totalChem; //return answer
    }
}