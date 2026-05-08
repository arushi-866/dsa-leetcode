class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin() ,:: tolower);
        int n= s.size();
        string str="";
        for(char st : s){
            if(isalnum(st)){
                str+=st;
            }
        }
        int left=0;
        int right=str.size()-1;
        while(left < right){
            if(str[left]!=str[right]){
                return false;
            }    
                left++;
                right--;
            
        }
        return true;
    }
};