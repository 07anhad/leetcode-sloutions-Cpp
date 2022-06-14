
class Solution {
public:
    int romanToInt(string s) {
        
        int total = 0;
         for (int i =0 ; i < s.size(); ++i)
          {
            switch(s[i])
            {
                case 'I':
                    if (s[i + 1] == 'V')
                    {
                        i++;
                        total += 4;
                        
                    }
                    else if (s[i + 1] == 'X')
                    {
                        i++;
                        total += 9;
                    }
                    else
                    {
                        total += 1;
                    }
                    break;
                case 'V':
                    total += 5;
                    break;
                case 'X':
                    
                    if ( s[i + 1] == 'L')
                    {
                        i++;
                        total += 40;
                    }
                    else if (s[i + 1] == 'C')
                    {
                        i++;
                        total += 90;
                    }
                    else
                    {
                        total += 10;
                    }
                    break;
                    
                case 'L':
                    total += 50;
                    break;
                case 'C':
                    if (s[i+1] == 'D')
                    {
                        total += 400;
                        i++;
                    }
                    else if( s[i+1] == 'M')
                    {
                        total += 900;
                        i++;
                    }
                    else
                    {
                        total += 100;
                    }
                    break;
                case 'D':
                    total += 500;
                    break;
                case 'M':
                    total += 1000;
                    break;
                default:
                    break;
                    
            }

          }
        return total;
        
    }
};