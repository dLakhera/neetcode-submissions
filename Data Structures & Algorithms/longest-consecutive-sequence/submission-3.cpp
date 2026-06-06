class Solution {
public:
    int longestConsecutive(vector<int>& vec) {
        sort(vec.begin(), vec.end());
        int j=0;
        int i=0;
        int ctr = 0;
        int n = vec.size();
        if (n == 1) return 1;
        for(;i<n;) 
        {
            int j = i+1;
            int l = 0;
            // while(j<n-1 and vec[j+1]-vec[j] == 1) j++;
            for(;j<n;j++){
                if (vec[j]-vec[j-1] ==1) l++;
                else if(vec[j] == vec[j-1]) continue;
                else break;
            }
            cout<<i << " " << j<<endl;
            ctr = max(ctr, l+1);
            i = j;
        }
        return ctr;
    }
};
