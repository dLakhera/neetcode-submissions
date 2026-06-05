class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // vector<int> prev(26,0);
        map<vector<int>, vector<string>> mp;
        vector<vector<string>> ans;
        if (strs.empty()) return ans;
        // ans.push_back(vector<string>{});
        int j = 0;

        for (int i=0;i<strs.size();i++){
            vector<int> cur(26,0);
            for(auto p: strs[i]) {
                cur[p-'a']++;
            }
            mp[cur].push_back(strs[i]);
        }

        // return ans;

        // unordered_map<string, vector<string>> ans;
        // for(auto p: strs){
        //     string o = p;
        //     sort(o.begin(), o.end());
        //     ans[o].push_back(p);
        // }
        // vector<vector<string>> vec;
        for(const auto& [a,b]: mp){
            ans.push_back(b);
        }

        return ans;
    }
};
