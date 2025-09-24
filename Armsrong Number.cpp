// User function Template for Java
class Solution {
    static boolean armstrongNumber(int n) {
        // code here
        int original = n;
        int sum = 0;
        int digits = String.valueOf(n).length(); 

        while (n > 0) {
            int digit = n % 10;
            sum += Math.pow(digit, digits);
            n /= 10;
        }

        return sum == original;
    }
}
