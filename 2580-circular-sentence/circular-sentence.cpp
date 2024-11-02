class Solution {
public:
    bool isCircularSentence(string sentence) {
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                if(sentence[i-1]!=sentence[i+1]){
                    return 0;
                }
            }
        }
        if(sentence[0]!=sentence[sentence.size()-1]){
            return 0;
        }
        return 1;
    }
};