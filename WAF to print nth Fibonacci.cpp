// WAF to print nth Fibonacci
#include<iostream>
using namespace std;

int Fibonacci(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    int a = 0, b = 1, c;
    
    for(int i=2;i<=n;i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main(){
    int n;
    cin>>n;
    cout<< Fibonacci(n);
    return 0;
}
