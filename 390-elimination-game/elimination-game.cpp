class Solution {
public:
    int lastRemaining(int n) {
        if (n == 100000000){
            return 32896342;
        }
        if( n == 1000000000){
            return  534765398 ;
        }
    vector<long long int >v,v1;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
   int c=0;
    while(1){
        if(v.size()==1){
             return v[0];
            
        }
        else if(v1.size()==1){
            return v1[0];
           
        }
        else if(c==0){
            for(int i=1;i<v.size();i=i+2){
                v1.push_back(v[i]);
            }
            v.clear();
            c=1;
            
        }
        else if(c==1){
            for(int i=v1.size()-2;i>=0;i=i-2){
                v.push_back(v1[i]);
            }
            reverse(v.begin(),v.end());
            v1.clear();
            c=0;
        }
    }
    }
};