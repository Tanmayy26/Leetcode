class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(string &s:words){
            int sum=0;
            for(char it:s){
                sum=sum+weights[it-'a'];
            }
            int wow=sum%26;
            ans.push_back('z'-wow);
        }
        return ans;
    }
};