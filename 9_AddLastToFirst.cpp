#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    char a = (s[s.length()-1]);
    s = a + s +a;
    cout<<s<<endl;
    return 0;  

}