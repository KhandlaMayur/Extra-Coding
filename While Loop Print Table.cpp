class Solution {
  public:
    void printTable(int n) {
        int multiplier = 10;
        while (multiplier) {
            // Your code here
            if(n>=1){
                 cout <<" "<<multiplier*n;
            multiplier -= 1;
            }
           
        }

        cout << endl;
    }
};
