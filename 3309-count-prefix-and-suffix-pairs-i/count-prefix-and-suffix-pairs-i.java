class Solution {
    public int countPrefixSuffixPairs(String[] words) {
        int k = 0;
        int n = words.length;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i<j && isPnS(words[i], words[j])){
                    k++;
                }
            }
        }
        return k;
    }

private boolean isPnS(String str1, String str2){
        if(str1.length() <= str2.length()){
            return str2.startsWith(str1) && str2.endsWith(str1);
        }
        return false;      
    }
}