#include<iostream>
using namespace std;
int main(){
    int a, b, temp;
        cout<<"enter two numbers : ";
        cin>>a>>b;
        while(b!=0){
            temp=b;
            b=a%b;
            a=temp;
        }
    cout<<"gcd is ";
    cout<<a;
    }
