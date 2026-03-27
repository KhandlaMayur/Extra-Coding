#include<bits/stdc++.h>
using namespace std;

int linearsearch(int arr[],int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
           return i;
        }
    }
    return -1;
}


int main(){
    int arr[10];
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target = 5;
    cout<<linearsearch(arr,size,target);
}