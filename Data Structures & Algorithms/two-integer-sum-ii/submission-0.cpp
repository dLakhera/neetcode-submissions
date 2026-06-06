class Solution {
public:
    vector<int> twoSum(vector<int>& vec, int t) {
        
        int i=0,n,j; 
        n = j =vec.size()-1;

        while(i<=j) {
            if(vec[i]+vec[j] == t) {
                return vector<int>{i+1,j+1};
            }
            if(vec[i]+vec[j] > t) {
                j--;
            } else if (vec[i]+vec[j] < t){
                i++;
            }
        }
    }
};
