class Solution {
public:
    void reverseString(vector<char>& s) {
    string str1 = "";
  for(int i = 0; i < s.size(); i++){
    str1+=(s[i]);
  }
    reverse(str1.begin(), str1.end());


s.clear();
for(int i = 0; i < str1.size(); i++){
    s.insert(s.begin()+i, str1[i]);

  }

    }
};