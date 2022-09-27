class Solution {
public:
    
    string getReverse(int x){
        string s = "";
        while(x){
            int temp = x%10;
            s+=to_string(temp);
            x =x/10;
        }
        return s;
    }
    
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x>=0 && x<10) return true;
        string s1 = to_string(x);
        string s2 = getReverse(x);
        return s1==s2;   
    }
};