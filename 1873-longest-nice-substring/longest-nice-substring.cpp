class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.length()<2) return "";

        //Divide and Conquer
        set<char> st(s.begin(), s.end());

        for(int i=0; i<s.length(); i++){
            //if any character's counterpart is missing then divide
            if(st.find((char)toupper(s[i]))==st.end() || st.find((char)tolower(s[i]))==st.end()){
                string t1 = longestNiceSubstring(s.substr(0,i));
                string t2 = longestNiceSubstring(s.substr(i+1));

                return t1.size()>=t2.size() ? t1 : t2;
            }
        }

        //return original as it is if all characters have their counterparts
        return s;
    }
};