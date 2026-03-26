// WAF check if a number is prime or not
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
    if(primenumber(n)){
        cout<<"number is prime";
    }
    else{
        cout<<"number is notprime";
    }
    return 0;
}
