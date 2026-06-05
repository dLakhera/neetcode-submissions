class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto p: nums){
            mp[p]++;
        }
        vector<pair<int,int>> pp;
        for(const auto& pair: mp){
            pp.push_back({pair.second, pair.first});
        }

        sort(pp.begin(), pp.end(), greater<pair<int,int>>());
        vector<int> ans;
        for(int i=0;i<k;i++) {
            ans.push_back(pp[i].second);
        }

        return ans;
    }
};
