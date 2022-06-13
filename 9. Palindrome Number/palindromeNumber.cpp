class Solution {
public:
    bool isPalindrome(int x) {
                long reverse=0;
        int n=x;
		while(n>0){
            reverse=reverse*10 + n%10;
            n=n/10;
        }
        if(reverse==x)
            return true;
        else 
            return false;
    }
};