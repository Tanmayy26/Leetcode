class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> v;
        string x;

        while (ss>>x) {
            v.push_back(x);
        }

        string ans = "";
        for (int i=v.size()-1; i>=0; i--) {
            ans += v[i];

            if (i != 0)
                ans += " ";
        }
        return ans;
    }
};