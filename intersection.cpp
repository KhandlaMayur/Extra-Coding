#include<iostream>
using namespace std;

int intersection(int arr1[],int arr2[],int size1,int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
    return -1;
}

int main(){
    int arr1[6];
    int arr2[7];
    int size1=sizeof(arr1)/sizeof(int);
    int size2=sizeof(arr2)/sizeof(int);
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    intersection(arr1,arr2,size1,size2);
}