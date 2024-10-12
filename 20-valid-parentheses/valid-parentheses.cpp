class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> map = {
            {')','('},
            {'}','{'},
            {']','['}
        };

        for(char i : s){
            if(map.find(i) == map.end()){
                stk.push(i);
            }
            else if(!stk.empty() && stk.top() == map[i]){
                stk.pop();
            }
            else{
                return false;
            }
        }
        return stk.empty();
    }
};