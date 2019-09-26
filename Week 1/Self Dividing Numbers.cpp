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

    vector<int> selfDividingNumbers(int left, int right) {

vector<int> sol;


        for(int i = left; i <= right; i++){


string s = number_to_string(i);
//cout<<"string "<<s<<"\n";
int con = 0;
    for(int j = 0; j < s.length(); j++){

int d = s[j] - '0';

            if(d != 0){
                if (i % d == 0){
                       // cout<<"d "<<d<<"\n";
                      con++;
                }
            }else{
            continue;
            }


    }
     if(con==s.length()){
                sol.push_back(i);
            }




    }
       return sol;

    }
};