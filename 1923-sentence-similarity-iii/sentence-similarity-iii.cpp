class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
    
        vector<string>first;
        vector<string>second;
        sentence1.push_back(' ');
        sentence2.push_back(' ');
        string ans="";

        for(int i=0;i<sentence1.size();i++)
        {
            if(sentence1[i]==' ')
            {
                first.push_back(ans); 
                ans="";
            }
            else
            {
                ans.push_back(sentence1[i]);
            }
        }
        for(int i=0;i<sentence2.size();i++)
        {
            if(sentence2[i]==' ')
            {
                second.push_back(ans);
                ans = "";
            }
            else
            {
                ans.push_back(sentence2[i]);
            }
        }
    
        int m1=0,m2= 0,n1=first.size()-1,n2=second.size()-1;

        while(m1<=n1&&m2<=n2)
        {
            if(first[m1]==second[m2])
            {
                m1++;
                m2++;
            }
            else if(first[n1]==second[n2])
            {
                n1--;
                n2--;
            }
            else break;
        }
        
    
        return(n1+1==m1 || n2+1==m2) ? true:false;

    }
};