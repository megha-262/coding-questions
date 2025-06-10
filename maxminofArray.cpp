#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,9,4,1,12};
    int mn = arr[0], mx = arr[0];
    for(int i=0;i<=5;i++){
        if(arr[i]<mn) mn = arr[i];
        if(arr[i]>mx) mx = arr[i];
    }
    cout<<"max = "<<mx<<", min = "<<mn;
}
