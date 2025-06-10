#include<iostream>
using namespace std;
int main(){
    int arr[100], n, key;
    cout<<"enter the number of elements : ";
    cin>>n;
    cout<<"enter "<< n <<" elements : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the number to search : ";
    cin>>key;
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"element found at index "<< i << endl;
            found = true;
        }
    }
    if(!found){
            cout<<"element not found at index ";
        }
}