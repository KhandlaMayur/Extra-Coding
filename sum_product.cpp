#include<iostream>
using namespace std;

pair<int,int> sum_product(int arr[],int size){
    int sum=0;
    int product=1;
    for(int i=0;i<size;i++){
        sum += arr[i];
        product *= arr[i];
    }
    return {sum,product};
}

int main(){
    int arr[10];
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    pair<int,int> result = sum_product(arr,size);
    cout<<"Sum:"<<result.first<<endl;
    cout<<"Product:"<<result.second;
}