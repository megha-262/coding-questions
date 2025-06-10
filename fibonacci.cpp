#include<iostream>
using namespace std;
int main(){
    int n, x=0, y=1, z=0;
    cout<<"enter the number : ";
    cin>>n;
    while(z<=n){
        cout<<" "<<z;
        x=y;
        y=z;
        z=x+y;
    }
}
