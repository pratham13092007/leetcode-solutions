
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp1;
        unordered_map<char, int> mpp2;

        if (s.length() != t.length()) {
            return false;
        }
        int n = s.length();

        // Count frequency of characters
        for (int i = 0; i < n; i++) {
            mpp1[s[i]]++;
            mpp2[t[i]]++;
        }
        
        // Compare frequencies
        for (auto i : mpp1) {
            if (i.second != mpp2[i.first]) {
                return false;
            }
        }
        return true;
    }
};