class Solution {
public:

    map<char, string> p;



    vector<string> morse{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    void yes(){
        for(int i = 0; i < 26; i++){
                char a = 'a' + i;
            p[a]=morse[i];
        }
    }

     int uniqueMorseRepresentations(vector<string>& words) {
        yes();

        map<string, int> mapa;

        int con = 0;
        for(int i = 0; i < words.size(); i++){
                string auz = "";
            for(int j = 0; j < words[i].size(); j++){
                auz+= p[words[i][j]];
            }

                mapa[auz]++;

        }

return mapa.size();
    }
};