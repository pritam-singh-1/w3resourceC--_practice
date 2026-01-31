#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"Enter a string: "<<endl;
    getline(cin,a);
    if(a.length()<=2){
        cout<<a<<endl;
    }
    else{
        for(int i=0;i<4;i++){
            cout<<a.substr(0,2);
        }
    }
    return 0;
}