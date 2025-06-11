#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter a string :";
    getline(cin,str);
    string reversed = "";
    int n = str.length();
    for(int i=n-1;i>=0;i--){
            reversed +=str[i];
    }
    cout<<"reversed string : "<<reversed<<endl;
}