#include<iostream>
using namespace std;
int sameLast(int a, int b){
    if(a%10 == b%10){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"The output is: "<<sameLast(a,b)<<endl;
    return 0;
}