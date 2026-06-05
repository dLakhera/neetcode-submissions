class Solution {
public:
    vector<int> topKFrequent(vector<int>& vec, int k) {
        
        int i=0;
        vector<pair<int,int>> mp;
        sort(vec.begin(), vec.end());
        for( ;i<vec.size();) {
            int j=i;
            while(j<vec.size() and vec[i] == vec[j]) j++;
            mp.push_back({j-i, vec[i]});
            i = j;
        }
        // for(auto p: mp){
        //     cout << p.first<<" " << p.second<<endl;
        // }
        sort(mp.begin(), mp.end(), greater<pair<int,int>>());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(mp[i].second);
        }
        
        // unordered_map<int, int> mp;
        // for(auto p: nums){
        //     mp[p]++;
        // }
        // vector<pair<int,int>> pp;
        // for(const auto& pair: mp){
        //     pp.push_back({pair.second, pair.first});
        // }

        // sort(pp.begin(), pp.end(), greater<pair<int,int>>());
        // vector<int> ans;
        // for(int i=0;i<k;i++) {
        //     ans.push_back(pp[i].second);
        // }

        return ans;
    }
};
