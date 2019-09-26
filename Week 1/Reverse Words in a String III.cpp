class Solution {
public:
    string reverseWords(string s) {
                string sol = "";
        int a = 0;

        int spaces = 0;
        int p = 0;

        for(int i = 0 ; i < s.size(); i++){

            if(s[i]==' '){
                spaces++;
            }
        }

        for(int i = 0 ; i < s.size(); i++){

            if(s[i]==' '){
                    p++;
               string aux = "";

               for(int j = a; j < i; j++){
                aux+=s[j];
               }

    reverse(aux.begin(), aux.end());

               sol+= (aux+" ");
                
               a=i+1;
                }else if(spaces==p){

                string aux = "";

               for(int j = a; j < s.size(); j++){
                aux+=s[j];
               }
                    reverse(aux.begin(), aux.end());

                     sol+=aux;

               break;

                }
            }
            return sol;
    }
};