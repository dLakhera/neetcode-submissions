class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // vector<int> prev(26,0);
        unordered_map<string, vector<string>> mp;

        for (auto s: strs){
            vector<int> cur(26,0);
            for(auto p: s) {
                cur[p-'a']++;
            }
            string key = "";
            for(auto p: cur)
            {
                key+='0'+p;
            }
            mp[key].push_back(s);
        }

        vector<vector<string>> ans;
        for(const auto& [a,b]: mp){
            ans.push_back(b);
        }

        return ans;
    }
};
