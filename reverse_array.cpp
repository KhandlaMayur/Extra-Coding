#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main (){
    int arr[10];
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reversearray(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}