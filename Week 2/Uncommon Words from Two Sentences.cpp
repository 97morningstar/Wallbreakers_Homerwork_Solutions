class Solution {
public:

bool findByValue(vector<string> & vec, map<string, int> mapOfElemen, int value)
{
	bool bResult = false;
	auto it = mapOfElemen.begin();

	while(it != mapOfElemen.end())
	{

		if(it->second == value)
		{
			bResult = true;
			vec.push_back(it->first);
		}
		it++;
	}
	return bResult;
}


  vector<string> uncommonFromSentences(string A, string B) {

istringstream issa(A);
vector<string> resultsA((istream_iterator<string>(issa)),
                                 istream_iterator<string>());
istringstream issb(B);
vector<string> resultsB((istream_iterator<string>(issb)),
                                 istream_iterator<string>());


              map<string, int> mapa;
                        vector<string> pop;

            for(int i = 0; i < resultsB.size(); i++){
               mapa[resultsB[i]]++;
            }
              for(int i = 0; i < resultsA.size(); i++){
               mapa[resultsA[i]]++;
            }

            bool a = findByValue(pop, mapa, 1);



        return pop;

    }
};