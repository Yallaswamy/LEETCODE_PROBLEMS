class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0,tw=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                five++;
            }
            else if(bills[i]==10){
                ten++;
                if(five>0){
                    five--;
                }
                else{
                    return 0;
                }
            }
            else if(bills[i]==20){
                tw++;
                if(ten>0 and five>0){
                    ten--;
                    five--;
                }
                else if(five>=3){
                    five-=3;
                }
                else{
                    return 0;
                }
            }
        }
        return 1;
    }
};