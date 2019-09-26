class Solution {
public:
     bool checkingifisvowel(char vowel)
    {
        switch(vowel)
        {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                return true;
            default:
                return false;
        }
    }
    
  string reverseVowels(string s) {
        
        int a = 0;
        int b = s.size()-1;
        
        while(a < b)
        {
            if(!checkingifisvowel(s[a]))
            {
                a++; 
                continue;
            }
            
            if(!checkingifisvowel(s[b]))
            {
                b--;
                continue;
            }
            
            swap(s[a++], s[b--]);
        }
        return s;
    }
    
   
};