class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        set<char> close = {'}', ')', ']'};
        unordered_map<char, char> mp = {
            {'{' , '}'},
            {'[' , ']'},
            {'(' , ')'},
        };
        for(auto p : s)
        {
            if(close.find(p) != close.end())
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
