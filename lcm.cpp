#include<iostream>
using namespace std;
int main(){
    int a, b, temp, gcd, lcm ,x ,y;
        cout<<"enter two numbers : ";
        cin>>a>>b;
        x=a;
        y=b;
        while(b!=0){
            temp=b;
            b=a%b;
            a=temp;
        }
        gcd = a;
        lcm = (x*y)/gcd;
        cout<<"lcm is ";
        cout<<lcm;
        
}
