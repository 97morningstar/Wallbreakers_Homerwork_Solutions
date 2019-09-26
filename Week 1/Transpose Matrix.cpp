class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        
    vector<vector<int>> sol(A[0].size(), vector<int>());

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A[i].size(); j++)
        {
            sol[j].push_back(A[i][j]);
        }
    }

     
return sol;
    }
};