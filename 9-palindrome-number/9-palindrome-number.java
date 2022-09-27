class Solution {
    
    public String reverseNumber(int x){
        String s = "";
        while(x>0){
            int temp = x%10;
            s+=Integer.toString(temp);
            x=x/10;
        }
        return s;
    }
    
    public boolean isPalindrome(int x) {
        if(x<0) return false;
        if(x>=0&&x<10) return true;
        String s1 = Integer.toString(x);
        String s2 = reverseNumber(x);
        return s1.equals(s2);
    }
}