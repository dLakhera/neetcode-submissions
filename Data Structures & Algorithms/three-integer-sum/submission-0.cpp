class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& vec) {

        int i, j, k;
        i = 0;
        int n =vec.size();
        vector<pair<int, int>> mp(n, make_pair<int, int>(0, 0));

        for (int i = 0; i < n; i++)
        {
            mp[i] = {vec[i], i};
        }

        sort(mp.begin(), mp.end());

    // for(auto p: mp){
    //     cout<<p.ff << " " << p.ss << endl;
    // } 
    // /cout << endl;

        set<vector<int>> s;

        while (i < n-2)
        {
            int t = -1 * mp[i].first;
            // cout << "Target sum: " << t << endl;
            j = n - 1;
            k = i + 1;
            while (k < j)
            {
                // cout << "This iteration starter sum: " << mp[k].first + mp[j].first << endl;
                if (mp[k].first + mp[j].first == t)
                {
                    s.insert({vec[mp[i].second], vec[mp[k].second], vec[mp[j].second]});
                    k++;
                }
                else if (mp[k].first + mp[j].first > t)
                {
                    j--;
                }
                else
                {
                    k++;
                }
            }
            i++;
        }


        vector<vector<int>> ans;

        for (const auto &v : s)
        {
            ans.push_back(v);
        }
        return ans;

    }
};
