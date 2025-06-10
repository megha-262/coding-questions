#include<iostream>
using namespace std;
int main(){
    int n, sum=0, r, x;
    cout<<"enter the number : ";
    cin>>n;
    x=n;
    while(n!=0){
        r = n%10;
        sum = sum+ r*r*r;
        n = n/10;
    }
    if(sum==x){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
}
