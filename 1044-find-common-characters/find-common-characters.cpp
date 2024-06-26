class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        sort(words.begin(),words.end());
        vector<string> res;
        for(char c:words[0]){
            bool com=true;
            for(int i=1;i<words.size();i++){
                if(words[i].find(c)==string::npos){
                    com=false;
                    break;
                }else{
                    words[i].erase(words[i].find(c),1);
                }
            }
            if(com){
            res.push_back(string(1,c));
            }
        }
        return res;
    }
};