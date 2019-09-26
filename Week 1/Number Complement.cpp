class Solution {
public:
    int findComplement(int num) {
        
        unsigned n =1;
        
        while(n <=num){
            n = n<<1;
        }
        
        int solution = n - num;
		
        return solution -1;
    }
};