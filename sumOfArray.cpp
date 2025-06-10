#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,7,4,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i=0;i<=5;i++){
        sum +=arr[i];
    }
    cout<<"sum of element = "<<sum;
}
