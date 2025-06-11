#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter a string :";
    getline(cin, s);
    int vowelCount = 0 , consonantCount = 0;
    for(int i=0;i<s.length();i++){
        //char ch = tolower(s[i]);
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            if(s[i] =='a' || s[i] =='e' || s[i] =='i' || s[i] =='o' || s[i] =='u' || s[i] =='A' || s[i] =='E' || s[i] =='I' || s[i] =='O' || s[i] =='U'){
                vowelCount++;
            }
            else{
                consonantCount++;
            }
        }
    }
    cout<<"Number of vowel : "<<vowelCount<<endl;
    cout<<"Number of consonant : "<<consonantCount<<endl;
}