#include<iostream>
using namespace std;

int main(){
    int n[10];
    int size=sizeof(n)/sizeof(int);
    for(int i=0; i<size;i++){
        cin>>n[i];
    }
    int smallest=INT16_MAX;
    int largest=INT16_MIN;
    
    for(int i=0;i<size;i++){
        // if(n[i]<smallest){
        //     smallest=n[i];
        // }
        smallest = min(n[i],smallest);
        largest = max(n[i],largest);
    }
    cout<<"smallest:"<<smallest<<" "<<"largest:"<<largest;
    
}