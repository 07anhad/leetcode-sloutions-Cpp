class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        cin.tie(0);
        cout.tie(0);
        
        int n = nums.size();
        int count = 0;
        map<int,int> ans;
        
        for(int i =0;i<n;i++){
            count += ans[nums[i]];
            ans[nums[i]]++;
        }
        
        return count;
    }
};