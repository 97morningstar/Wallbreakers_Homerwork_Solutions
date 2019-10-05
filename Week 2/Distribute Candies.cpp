class Solution {
public:
    int distributeCandies(vector<int>& candies) {
               int sizes = candies.size();
      int n = sizes/2;

      map<int, int> p;
      int con = 0;

      for(int i = 0; i < sizes; i++){
        p[candies[i]]++;
      }

      int map_size = p.size();

      if(map_size==n){
        return map_size;
      }else if(map_size>n){
      return n;
      }else {
      return map_size;
      }
    }
};