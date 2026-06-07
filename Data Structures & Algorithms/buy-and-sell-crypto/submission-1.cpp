#include<cstring>

const int MAX = 101;
class Solution {
public:

    int tab[MAX][MAX];

    int recur(int i, int j, vector<int>& vec)
    {
        if(i>=vec.size() or j>=vec.size()) {
            return -1;
        }
        if(i==j or i>j){
            return 0;
        }

        if(tab[i][j]!=-1) {
            return tab[i][j];
        }

        int profit = max(0,vec[j] - vec[i]);

        tab[i][j] =  max(profit, max(recur(i+1,j, vec), recur(i,j+1, vec)));

        return tab[i][j];
    }
    int maxProfit(vector<int>& vec) {
        int n = vec.size();
        memset(tab, -1, sizeof(tab));

        int profit = max(0,recur(0,1,vec));
        return profit;
    }
};
