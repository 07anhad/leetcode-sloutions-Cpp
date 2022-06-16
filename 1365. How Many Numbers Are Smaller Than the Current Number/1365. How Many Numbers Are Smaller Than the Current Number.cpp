class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int> m;
        vector<int>v(nums);
        
        sort(v.begin(),v.end());
        
        for(int i =0;i<v.size();i++)
            m.insert({v[i],i});
        
        for(int i =0;i<nums.size();i++)
            v[i] = m[nums[i]];
        
        return v;
    }
};