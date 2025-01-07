class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> answer;
        int n = words.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(words[i]==words[j]){
                    continue;
                }

                if(isSubstr(words[i], words[j])){
                    answer.push_back(words[i]);
                    break;
                }
            }
        }
        return answer;
    }


private:
    bool isSubstr(string &sub, string &main){
        for(int p=0; p<main.size(); p++){
            bool flag = true;
            for(int q=0; q<sub.size(); q++){
                if(p+q >= main.size() || main[p+q]!=sub[q]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                return true;
            }
        }
        return false;
    }
};