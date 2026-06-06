class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int prod = 1;
        int ctr = 0;
        for(auto p: nums){
            if(p!=0)
                prod*=p;
            else
                ctr++;
        }
        vector<int> res(nums.size());
        for(int i=0;i<nums.size();i++){
            if(ctr>=2) res[i]=0;
            else if (nums[i]!=0){
                if (ctr>0){
                    res[i] = 0;
                } else{
                    res[i] = prod/nums[i];
                }
            } else{
                res[i] = prod;
            }
        }

        return res;

    }
};
