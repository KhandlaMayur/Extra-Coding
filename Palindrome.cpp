class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        int temp=n;
        int rev=0;
        while(n>0){
            int i=n%10;
            rev=rev*10+i;
            n=n/10;
        }
        return temp==rev;
        
    }
};
