class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> dx;
        for(int i =0;i<magazine.length();i++)
            dx[magazine[i]]++;
        
        for(int i=0;i<ransomNote.length();i++){
            if(dx[ransomNote[i]]==0)
                return false;
            
            dx[ransomNote[i]]--;
        }
        
        return true;
    }
};