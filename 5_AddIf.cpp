#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"Enter a string: "<<endl;
    getline(cin,a);
    if(a.length() > 2 && a.substr(0,2)=="if"){
        cout<<a<<endl;
    }
    else{
        cout<<"if " + a<<endl;
    }
    return 0;
}