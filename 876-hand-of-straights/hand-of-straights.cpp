class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0){
            return false;
        }
        map<int,int> m;
        for(int c:hand){
            m[c]++;
        }
        sort(hand.begin(),hand.end());
        for(int i=0;i<hand.size();i++){
            if(m[hand[i]]==0){
                continue;
            }
            for(int j=0;j<groupSize;j++){
                int currcard=hand[i]+j;
                if(m[currcard]==0){
                    return false;
                }
                m[currcard]--;
            }
        }
    return true;
    }
};