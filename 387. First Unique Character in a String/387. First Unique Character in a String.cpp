class Solution {
public:
    int firstUniqChar(string s) {
        
        cin.tie(0);
        cout.tie(0);
        unordered_map<char,int> map;
        
        
        for(int i =0;i<s.length();i++){
            char current = s[i];
            map[current]++;
            
        }
        
        for(int i=0;i<s.length();i++){
            char current = s[i];
            if(map[current]==1)
                return i;
        }
        
        return -1;
    }
};