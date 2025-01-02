class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans(queries.size());
        unordered_set<char> st{'a','e','i','o','u'};

        vector<int> Vowel_sum(words.size());
        int sum = 0;

        for(int i=0; i<words.size(); i++){
            string CurntWord = words[i];
            if(st.count(CurntWord[0]) && st.count(CurntWord[CurntWord.size()-1])){
                sum++;
            }
            Vowel_sum[i] = sum;
        }

        for(int i=0; i<queries.size(); i++){
            vector<int> currentQuery = queries[i];
            ans[i] = Vowel_sum[currentQuery[1]] - (currentQuery[0] == 0 ? 0 : Vowel_sum[currentQuery[0] - 1]);
        }
        return ans;
    }
};