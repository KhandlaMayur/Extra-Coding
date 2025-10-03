class Solution {
public:
    int alternateDigitSum(int n) {
        string s=to_string(n);
        int sum=0;
        int sign=1;
        for(char c : s){
            int i=c-'0';
            sum=sum+sign*i;
            sign *=-1;
        }     
        return sum;   
    }
};
