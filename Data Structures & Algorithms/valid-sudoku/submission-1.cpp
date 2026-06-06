class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        bool isValid = true;
        vector<int> vec(9,0);
		
		// for(int i=0;i<9;i++) {
		// 	for(int j=0;j<9;j++){
		// 		cout<< b[i][j] << " ";
		// 	}
		// 	cout<<endl;
		// }

		for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++){
                if (b[i][j]!='.')
                    isValid = ++vec[b[i][j]-'1'] !=1 ? false:true;
				if(!isValid) {
					return isValid;
				}
            }
            fill(vec.begin(), vec.end(), 0);
        }

        if(!isValid) {
            return false;
        }

        for(int j=0;j<9;j++){
            for(int i=0;i<9;i++)
            {
                if (b[i][j]!='.')
                    isValid = ++vec[b[i][j]-'1'] !=1 ? false:true;                    
					if(!isValid) 
						return isValid;
			}
            fill(vec.begin(), vec.end(), 0);
        }

        if(!isValid) {
            return false;
        }

        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3 ){
				// cout << "Running for i: " << i << ": " << j << endl;
                for(int k = 0;k<3;k++){
					for(int l = 0;l<3;l++){
						if (b[i+k][j+l] != '.')
							isValid = ++vec[b[i+k][j+l] - '1'] != 1 ? false:true;

						if (!isValid) return false;
					}
				}
				if (!isValid) {
					return isValid;
				}
				// cout << isValid << endl;
				// for(auto p: vec) {
				// 	cout << p << " ";
				// } cout<<endl;
				fill(vec.begin(), vec.end(), 0);

            }
		}
        return isValid;
    }
};

