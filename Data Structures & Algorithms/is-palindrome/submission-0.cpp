class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(char ch:s){
            if((ch >= 'a' && ch <= 'z') || 
               (ch >= 'A' && ch <= 'Z') || 
               (ch >= '0' && ch <= '9')){
                s1+=tolower(ch);
            }
        }
        int st=0,end=s1.size()-1;
        while(st<=end){
            if(s1[st]!=s1[end]){
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};
