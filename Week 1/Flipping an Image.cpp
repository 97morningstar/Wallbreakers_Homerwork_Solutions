class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
         vector<vector<int>> sol(A[0].size(), vector<int>());

    for(int i = 0; i < A.size(); i++){
        for(int j = A[i].size()-1; j >= 0; j--){
                if(A[i][j]==0){
                    A[i][j]=1;
                }else{
                    A[i][j]=0;
                }
            sol[i].push_back(A[i][j]);
        
        }
    }

return sol;
    }
};