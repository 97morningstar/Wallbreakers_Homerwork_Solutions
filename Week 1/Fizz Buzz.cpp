class Solution {
public:
   
string number_to_string(int x) {

    if (!x)
        return "0";

    string s, s2;
    while(x) {
        s.push_back(x%10 + '0');
        x /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}


 vector<string> fizzBuzz(int n) {

     vector<string> sol;

        for(int i = 1; i <= n; i++){


            if(i%3==0 && i%5==0){

                sol.push_back("FizzBuzz");

            }else if(i%3==0){

            sol.push_back("Fizz");

            }else if(i%5==0){

            sol.push_back("Buzz");

            }else{

            sol.push_back(number_to_string(i));
            }

        }

        return sol;
    }
};