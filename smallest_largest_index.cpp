#include<iostream>
using namespace std;

int main(){
    int n[10];
    int size=sizeof(n)/sizeof(int);
    for(int i=0; i<size;i++){
        cin>>n[i];
    }
    int smallest=0;
    int largest=0;
    
    for(int i=0;i<size;i++){
        if(n[i]<n[smallest]){
            smallest=i;
        }
        if(n[i]>n[largest]){
            largest=i;
        }
        // smallest = min(n[i],smallest);
        // largest = max(n[i],largest);
    }
    cout<<"smallest:"<<smallest<<" "<<"largest:"<<largest;
    
}