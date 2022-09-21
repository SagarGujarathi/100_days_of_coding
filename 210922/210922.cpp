class Solution {
public:
    int longestValidParentheses(string s) {
        int count1 = 0;
        int count2 = 0;
        for(int i =0;i<s.length();i++){
            if(i == 0 && s[i] == ')'){
                continue; 
            }
            else if(i == s. length()-1 && s[i] == '('){
                continue;
            }
            if(s[i] =='('){
                count1++;}
            else if(s[i] == ')'){
                
                    count2++;
                
            }
            }
        
        return  min(count1,count2)*2;
        
        
    }
};
