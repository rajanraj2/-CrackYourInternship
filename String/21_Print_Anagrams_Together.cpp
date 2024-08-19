// Link - https://www.geeksforgeeks.org/problems/print-anagrams-together/1
// Print Anagrams Together


class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& strs) {
        //code here
        unordered_map<string, vector<string>> ans;

        for (string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            ans[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& entry : ans) {
            result.push_back(entry.second);
        }

        return result;
    }
};