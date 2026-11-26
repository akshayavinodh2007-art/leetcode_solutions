class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
    for(int i=0;i<s.length();i++){
        if(isalnum(s[i]))
        ans+=tolower(s[i]);
    }  
    int left=0;
    int right=ans.length()-1;
    for(int i=0;i<ans.length()/2;i++){
        if(ans[left]==ans[right]){
            left++;
            right--;
        }
        else
        return false;
    }  
    return true;
    }
};