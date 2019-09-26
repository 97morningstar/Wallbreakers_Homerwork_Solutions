class Solution {
public:
    int singleNumber(vector<int>& nums) {
          map<int, int> mapa;

        for(int i = 0; i < nums.size(); i++){

            if(mapa[nums[i]] == 0){
                mapa[nums[i]]=1;
            }else if(mapa[nums[i]] == 1){
             mapa.erase(nums[i]);
            }
        }

        return mapa.begin()->first;
    }
};