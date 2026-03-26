// Floyd's Triangle Pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp = 1;
    for(int i = 1; i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<temp;
            temp++;
        }
        cout<<endl;
    }
}
// 1
// 23
// 456
// 78910
