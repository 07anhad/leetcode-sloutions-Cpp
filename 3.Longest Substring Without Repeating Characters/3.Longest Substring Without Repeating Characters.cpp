class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, bool> ump;
        int mx = 0;
        string str = "";
        for (auto i : s){
            str += i;
            while(ump[i]){
                ump[str[0]] = false;
                str.erase(0, 1);
            }
            mx = max(mx, int(str.size()));
            ump[i] = true;
        }
        return mx;
    }
};