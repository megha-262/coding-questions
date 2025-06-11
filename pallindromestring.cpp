#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a string :";
    cin>>str;
    bool ispallindrome = true;
    int n = str.length();
    for(int i=0;i<n/2;i++){
        if(str[i] != str[n -1 -i]){
            ispallindrome = false;
        }
    }
    if(ispallindrome){
        cout<<"pallindrome"<<endl;
    }
    else{
        cout<<"pallindrome"<<endl;
    }
}