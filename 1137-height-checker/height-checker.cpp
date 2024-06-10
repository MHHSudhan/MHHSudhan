class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> dup(heights.size());
        int count=0;
        dup.assign(heights.begin(),heights.end());
        sort(dup.begin(),dup.end());
        for(int i=0;i<heights.size();i++){
            if(dup[i]!=heights[i]){
                count++;
            }
        }
        return count;
    }
};