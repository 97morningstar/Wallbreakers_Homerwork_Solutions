class Solution {
public:
    int titleToNumber(string s) {
          int sol = 0;

        for(int i = 0; i < s.size(); i++){

        sol *= 26;
        sol += s[i]  - 65 + 1;

        }

        return sol;
    }
};