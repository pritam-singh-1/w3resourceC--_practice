#include<iostream>
using namespace std;
int main(){
    int a;
    bool b=true;
    bool c=false;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    if((a>=90 && a<=110) || (a>=190 && a<=210)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
    
}