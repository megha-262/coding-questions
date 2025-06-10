#include<iostream>
using namespace std;
int main(){
    int x ,y;
    cout<<"enter starting and ending of range : ";
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        bool isprime = true;
        if(i<=1){
            continue;
        }
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                isprime = false;
                break;
            }
        }
        if(isprime){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    }