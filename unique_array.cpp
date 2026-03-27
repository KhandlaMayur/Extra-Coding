#include<iostream>
using namespace std;

// int unique_array(int arr[],int size){
//     int ans = 0;
//     for(int i=0;i<size;i++){
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }

int unique_array(int arr[],int size){
    
    for(int i=0;i<size;i++){
        int count = 0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<<" ";
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
unique_array(arr,size);

}