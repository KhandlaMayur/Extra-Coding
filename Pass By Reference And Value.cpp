class Solution {
    static int[] passedBy(int a, int b) {
        a += 1;     // passed by value (copy modified)
        b += 2;     // passed by value, simulate reference by returning
        return new int[]{a, b};
    }
}
