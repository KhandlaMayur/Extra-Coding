class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        
        int gcd =calgcd(a,b);
        int lcm=(a*b)/gcd;
        return {lcm,gcd};
        }
        int calgcd(int a, int b){
            while(b!=0){
            int temp = b;
            b=a%b;
            a = temp;
            }
        return a;
        }
};
