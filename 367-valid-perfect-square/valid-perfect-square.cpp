class Solution {
public:
    bool isPerfectSquare(int num) {
        for(double i=0;i*i<=num;i++){
            if(i*i==num){
                if(i==int(i)){
                    return true;
                }
            }
        }
        return false;
    }
};