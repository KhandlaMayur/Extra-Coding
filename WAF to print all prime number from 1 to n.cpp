// WAF to print all prime number from 1 to n
#include<iostream>
using namespace std;

bool primenumber(int n){
    if(n <= 1) return false;
    for(int i=2;i*i<=n;i++){
        if(n % i == 0){
            return false;
        }
    }
            return true;
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
    if(primenumber(i)){
        cout<<i<<endl;
    }
    }
    return 0;
}
