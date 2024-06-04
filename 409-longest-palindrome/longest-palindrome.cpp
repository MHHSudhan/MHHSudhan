class Solution {
public:
    int longestPalindrome(string s) {
       int oc=0;
       unordered_map<char,int> ump;
       for(char ch:s){
        ump[ch]++;
       if(ump[ch]%2==1)
        oc++;
        else
        oc--;
       }
       if(oc>1){
        return s.length()-oc+1;
       }
       return s.length();
    }
};