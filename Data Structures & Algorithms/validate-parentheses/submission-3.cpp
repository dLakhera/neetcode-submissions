class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        // set<char> close = {'}', ')', ']'};
        char arr[]= {'}', ')', ']'};
        unordered_map<char, char> mp = {
            {'{' , '}'},
            {'[' , ']'},
            {'(' , ')'},
        };
        for(auto p : s)
        {
            bool flag = false;
            for(auto k: arr){
                if(p == k) {
                    flag = true;
                    break;
                }
            }
            if(flag)
            {
                if(not st.empty() and mp[st.top()] == p)
                    st.pop();
                else{
                    return false;
                }
            }

            else st.push(p);
        }

        if(st.empty()) return true;
        else return false;
    }
};
