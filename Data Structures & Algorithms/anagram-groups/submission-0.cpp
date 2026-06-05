class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map<string,string> mp;
        unordered_map<string, vector<string>> ans;
        for(auto p: strs){
            string o = p;
            sort(o.begin(), o.end());
            ans[o].push_back(p);
        }
        vector<vector<string>> vec;
        for(const auto& [a,b]: ans){
            vec.push_back(b);
        }

        return vec;
    }
};
