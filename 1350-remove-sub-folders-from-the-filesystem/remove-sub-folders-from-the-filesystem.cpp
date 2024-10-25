class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string> ans;
        sort(folder.begin(), folder.end());

        ans.push_back(folder[0]);

        for(int i=1; i<folder.size(); i++){
            string lastF = ans.back();
            lastF += "/";

            // Check if the current folder starts with the last added folder path
            if(folder[i].compare(0, lastF.size(), lastF) != 0){
                ans.push_back(folder[i]);
            }
        }
        return ans;
    }
};