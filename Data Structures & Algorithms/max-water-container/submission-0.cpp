class Solution {
public:
    int maxArea(vector<int>& vec) {
        int n = vec.size();
        int i = 0, j=n-1;
        int mx = 0;
        while(i<j) 
        {
            int vol = (j-i) * min(vec[j],vec[i]);
            mx = max(mx, vol);
            if(vec[j] < vec[i]) j--;
            else{
                i++;
            }
        }

        return mx;
    }
};
