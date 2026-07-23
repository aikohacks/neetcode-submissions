class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n=nums.size();
        vector<int> a(2*n);
        int i;
        for(i=0;i<n;i++)
        { 
            a[i] = a[i+n] = nums[i];
         
        }
        return a;
    }
};