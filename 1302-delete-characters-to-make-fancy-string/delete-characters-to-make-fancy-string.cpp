class Solution {
public:
    string makeFancyString(string s) {
        string result;
        int count =
            1; // Tracking consecutive occurrences of the current character

        // Starting with the first character
        result += s[0];

        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                count = 1; // Reset count for a new character
            }

            // Only add character if it's less than or equal to 2 consecutive
            // occurrences
            if (count <= 2) {
                result += s[i];
            }
        }

        return result;
    }
};