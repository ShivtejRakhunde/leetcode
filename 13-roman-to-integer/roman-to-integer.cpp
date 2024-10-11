class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
    int i, sum = 0;
    int len = s.length();

    for(i = 0; i < len; i++){
        if(mp[s[i]] < mp[s[i+1]]){
            sum = sum - mp[s[i]];
        }
        else{
            sum = sum + mp[s[i]];
        }
    }
    return sum;
}
};