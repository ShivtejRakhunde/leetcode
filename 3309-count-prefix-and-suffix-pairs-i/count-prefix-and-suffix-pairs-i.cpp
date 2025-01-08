class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int k = 0;
        int n = words.size();

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i<j && isPnS(words[i], words[j])){
                    k++;
                }
            }
        }
        return k;
    }

private:
    bool isPnS(string &str1, string &str2){
        if(str1.length() <= str2.length()){
            if (str2.find(str1) == 0 && str2.rfind(str1) == str2.size() - str1.size()) {
                return true;
            } 
        }
        return false;      
    }
};