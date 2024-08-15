class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        int twenty=0;
        for(int bill:bills){
            if(bill==5){
                five++;
            }
            else if(bill==10){

                if(five>=1){
                    ten++;
                    five--;
                }
                else{
                    return false;
                }
            }
            else if(bill==20){
                if(ten>=1&&five>=1){
                    twenty++;
                    ten--;
                    five--;
                }
                else if(five>=3){
                    five-=3;
                }
                else{
                    return false;
                }
            }

        }
        return true;
    }
};