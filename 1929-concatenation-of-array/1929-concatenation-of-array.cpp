class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
         int n=nums.size();
        vector<int>vecc(2*n);
        for(int i=0;i<n;i++){
            vecc[i]=nums[i];
            vecc[i+n]=nums[i];
        }
        return vecc;
    }
};