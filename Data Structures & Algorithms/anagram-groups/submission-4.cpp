class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // vector<int> prev(26,0);
        unordered_map<string, vector<string>> mp;

        for (int i=0;i<strs.size();i++){
            vector<int> cur(26,0);
            for(auto p: strs[i]) {
                cur[p-'a']++;
            }
            string key = "";
            for(auto p: cur)
            {
                // char nt = char('0'+p);
                key+='0'+p;
            }
            mp[key].push_back(strs[i]);
        }

        // return ans;

        // unordered_map<string, vector<string>> ans;
        // for(auto p: strs){
        //     string o = p;
        //     sort(o.begin(), o.end());
        //     ans[o].push_back(p);
        // }
        // vector<vector<string>> vec;
        vector<vector<string>> ans;
        for(const auto& [a,b]: mp){
            ans.push_back(b);
        }

        return ans;
    }
};
