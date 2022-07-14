class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        const int n= nums.size();
        vector<int> v;
        int ans=0,b=n-1;
        v.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                continue;
            }
            else{
                v.push_back(nums[i]);
                ans++;
            }
        }
        nums=v;
        return ans+1;
    }
};