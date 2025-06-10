#include<iostream>
using namespace std;
int main(){
    int n,sum=0 ,rev=0 ,x ,rem ;
    cout<<"enter the number : ";
    cin>>n;
    x=n;
    while(n!=0){
        rem = n%10;
        rev = (rev*10) + rem;
        n = n/10;
    }
    cout<<"reverse number is : ";
    cout<<rev;
}
