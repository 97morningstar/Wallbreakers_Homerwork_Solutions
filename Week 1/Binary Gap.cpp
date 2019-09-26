class Solution {
public:
    int binaryGap(int N) {
        int one = -1;
        int res = 0;
        for(int i = 0; i < 32; ++i){
             if (((N >> i) & 1) > 0) {
                if (one >= 0)
                    res = max(res, i - one);
                one = i;
        }
        }
            
            return res;
        }
    
};