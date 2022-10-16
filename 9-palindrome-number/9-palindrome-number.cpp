class Solution {
public:
    bool isPalindrome(int x) {
        string  str = to_string(x);
        
        int s = str.size();
        int start = 0;
        int end = s-1;
        bool bolean;
        for(int i=0; i<s; i++){
            if(str[start] == str[end]){
                 bolean = true;
                start++;
                end--;
            }else{
                bolean = false;
            }
            
         }
        return bolean;
    }
};