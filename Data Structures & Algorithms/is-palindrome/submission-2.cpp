class Solution {
public:
    bool isan(char x) {
        if( (x>='a' and x<='z') or (x>='0' and x<='9')) return true;
        else false;
    }
    bool isPalindrome(string s) {
        int l = s.length()-1;
        int i=0,j=l;
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
        return tolower(c);
        });
        cout << s<< endl;
        for(auto p: s){
            cout << p << ": "<< isalnum(static_cast<unsigned char>(p)) << endl; 
        }
        while(i<=j) {
            if(!isalnum(static_cast<unsigned char>(s[i]))) i++;
            else if(!isalnum(static_cast<unsigned char>(s[j]))) j--;
            else if(s[i] == s[j]){
                i++,j--;
            } else{
                cout << s[i] << "," <<i << ": " << s[j]<<","<<j << endl;
                return false;
            }
        }

        return true;
    }
};
