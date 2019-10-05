class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
               set<int> A;
        set<int> B;

        for(int i =0; i< nums1.size(); i++){
            A.insert(nums1[i]);
        }
        for(int i =0; i< nums2.size(); i++){
            B.insert(nums2[i]);
        }

 map<int, int> sol;
for (auto elem : A)
{
     sol[elem]++;
}
for (auto elem : B)
{
     sol[elem]++;
}


        vector<int> p;
        for (auto& x: sol) {
                
                
                
                if(x.second==2){
               p.push_back(x.first);
                }
              
        }

        return p;
    }
};