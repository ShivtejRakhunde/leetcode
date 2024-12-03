class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        stringstream result;
        int j = 0; //spaceIndex

        for (int i = 0; i < s.size(); i++) { //i stringIndex
            if (j < spaces.size() &&
                i == spaces[j]) {
                // Insert space at the correct position
                result << ' ';
                ++j;
            }
            // Append the current character
            result << s[i];
        }
        // Convert the stream to a string
        return result.str();
    }
};