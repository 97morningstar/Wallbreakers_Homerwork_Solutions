class Solution {
public:

    bool wordPattern(string pattern, string str) {

        map<char, int> p;

        int con = 1;
        vector<int> col;


        for(int i = 0; i < pattern.size(); i++){

             if ( p.find(pattern[i]) == p.end() ) {
                 p[pattern[i]]=con;        //no

                 col.push_back( p[pattern[i]]);
                 con++;
            } else {
                col.push_back( p[pattern[i]]);         //si
            }
        }


// second

        map<string, int> pp;

        int conn = 1;
        vector<int> coll;

        istringstream iss(str);
vector<string> str2(istream_iterator<string>{iss},
                                 istream_iterator<string>());



        for(int i = 0; i < str2.size(); i++){

             if ( pp.find(str2[i]) == pp.end() ) {
                 pp[str2[i]]=conn;        //no

                 coll.push_back( pp[str2[i]]);
                 conn++;
            } else {
                coll.push_back( pp[str2[i]]);         //si
            }
        }








if(col==coll)
{
    return true;
}






        return false;

    }

};