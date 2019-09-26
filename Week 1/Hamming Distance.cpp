class Solution {
public:
    int hammingDistance(int x, int y) {
             int dist = 0;

    for (unsigned i = x ^ y; i > 0; i /= 2)
    {
        if (i & 1)
            dist++;
    }
    return dist;
    }
};