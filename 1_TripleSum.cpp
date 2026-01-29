#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second Number: "<<endl;
    cin>>b;
    if(a!=b){
        cout<<"The sum of two number is "<<a+b<<endl;
    }
    else{
        cout<<"The triple of sum of two number is "<<3*(a+b)<<endl;

    }
    return 0;
}