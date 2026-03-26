#include<iostream>
using namespace std;

int DecimaltoBinary(int decinum){
    int ans = 0,pow = 1;
    while(decinum > 0){
    int rem = decinum % 2;
    decinum /= 2;
    ans += (rem*pow);
    pow *= 10;
    }
    return ans;
}

int BinarytoDecimal(int binnum){
    int ans = 0, pow = 1;
    while(binnum > 0){
        int rem = binnum % 10;
        ans += rem * pow;
        binnum /= 10;
        pow *= 2;
    }
    return ans;
}

int main(){
    int decinum,binnum;
    cin>>decinum;
    cin>>binnum;
    cout<<"Binrary = " <<DecimaltoBinary(decinum)<<endl;
    cout<<"Decimal = " <<BinarytoDecimal(binnum);

    // for(int i=1;i<decinum;i++){
    //     cout << DecimaltoBinary(i)<<endl;
    // }
}
