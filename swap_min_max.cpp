#include<iostream>
using namespace std;

int min_max(int arr[],int size){
    int smallest=arr[0];
    int largest=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<smallest ){
            smallest = i;        
        }
         if(arr[i]>largest ){
            largest = i;        
        }
    }
        swap(arr[smallest],arr[largest]);
}

int main(){
    int arr[10];
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    min_max(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}