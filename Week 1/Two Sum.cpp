class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          map<int, int> mp; 
        vector<int> sol;
        for (int i = 0; i < nums.size(); i++)
            if (mp.count(target - nums[i])) 
            {
                sol.push_back(mp[target - nums[i]]); 
                sol.push_back(i);
                return sol;
            }
            else
                mp[nums[i]] = i; 
        return sol;
    }
};