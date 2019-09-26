class Solution {
public:

char tolower(char a){
 if ((a >= 65) && (a <= 90))
        a = a + 32;
    return a;
    }

 bool isPalindrome(string s) {

if(s==""){
    return true;
}

     string sol="";

     for(int i = 0; i < s.size(); i++){

         if(((tolower(s[i]) >= 97) && (tolower(s[i]) <= 122) ) || ( (s[i] >= 48) && s[i] <= 57 )){
                if(s[i] != ' '){
                sol+=s[i];
                }
            }
     }

if(sol.size()==1){
    return true;
}
     if(sol=="")
{
    return true;
}
if(sol.size()==2 && tolower(sol[0])!=tolower(sol[1])){
    return false;
}else if(sol.size()==2 && tolower(sol[0])!=tolower(sol[1])){
return true;
}

        for(int i = 0, j = sol.size()-1; i < sol.size()/2+1, j >=0; i++, j--){

char a = sol[i]; char b = sol[j];

                if((tolower(sol[i]) >= 97) && (tolower(sol[i]) <= 122)){
                     a = tolower(sol[i]);
                     b = tolower(sol[j]);
                }


            if(a!=b){
                return false;
            }
        }
return true;

    }

};