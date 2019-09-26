class Solution {
public:
    bool detectCapitalUse(string word) {
              bool isCap = false;

        int firstCase = 0;
        int secondCase = 0;
        int third = 0;


        for(int i = 0; i < word.size(); i++){

            if(word[i] >= 65 && word[i] <= 91){
                firstCase++;
            }
            if(word[i]>=97 && word[i]<=122){
                third++;
            }

           if(word[0] >= 65 && word[0] <= 91){
                if((i+1) <= word.size()){
                    if(word[i+1]>=97 && word[i+1]<=122){
                        secondCase++;
                    }
                }
            }




        }

        if(firstCase==word.size()){
            return true;
        }else if(third==word.size()){
        return true;
         }else if(secondCase==word.size()-1){
        return true;
        }

        return false;



    }
};