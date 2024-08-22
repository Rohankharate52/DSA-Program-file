

//check if the sentence is pangram..

// a to z sarv eka line mhade asale pahije...



class Solution {
    public :
    bool checkPangram(string sentence) {

        vector<bool>alpha(26,0) ;

        for(int i=0; i<sentence.size();i++)
        {
            alpha[sentence[i]-'a']=1;

        };
        for(int  i=0;i<26;i++)
        {
            if(alpha[i]==0)
            return 0;

        };
        return 1;

    }
};