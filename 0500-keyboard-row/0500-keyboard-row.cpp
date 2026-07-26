class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        // three strings for row in keyboard 
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        vector<string> ans;   // a vector to return string at last 

        for (string word : words) {    // every word one by one 

            string row;       // row to select row for each word belong to sinve first word tell which row it belong 

            // selecting rows 
            if (row1.find(tolower(word[0])) != string::npos)
                row = row1;
            else if (row2.find(tolower(word[0])) != string::npos)
                row = row2;
            else
                row = row3;



            bool valid = true;
            for (char ch : word) {
                if (row.find(tolower(ch)) == string::npos) {
                    valid = false;
                    break;
                }
            }
            if (valid)
                ans.push_back(word);
            }

        return ans;
    }
};