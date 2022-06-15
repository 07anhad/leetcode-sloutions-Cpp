class Solution {
public:
    bool isValid(string s) {
        stack <char> first;
        if(s.length() % 2 == 1){
            return false;
        }
        for(char i : s){
           if(i == '('){
                first.push(')');
           }
            else
                if(i == '['){
                    first.push(']');
                }
            else
                if(i == '{'){
                    first.push('}');
                }
            else
                if(first.empty() || (first.top() != i)){
                    return false;
                }
                else first.pop();
        }
        return first.empty();
    }
};