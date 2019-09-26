class Solution {
public:
string help(string str1, string str2)
{
    string sol;
    int n1 = str1.length(), n2 = str2.length();

    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++)
    {
        if (str1[i] != str2[j])
            break;
        sol.push_back(str1[i]);
    }

    return (sol);
}


string longestCommonPrefix (vector<string>& strs)
{
   

    if(!strs.empty()){
    int n = strs.size();
    string pop =  strs[0];

    for (int i=1; i<=n-1; i++)
        pop = help(pop, strs[i]);

  if(pop.length()){
    return (pop);
  }else{
      string g ="";
  return g;
  }
    }
    else{
string g ="";
  return g;
    }

    }
   



};