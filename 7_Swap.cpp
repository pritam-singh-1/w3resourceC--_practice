#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    if(s.length()==1){
        cout<<s<<endl;
    }
    else{
        char a;
        a=s[0];
        s[0]=s[s.length()-1];
        s[s.length()-1]=a;
        cout<<s<<endl;
    }
    return 0;
}