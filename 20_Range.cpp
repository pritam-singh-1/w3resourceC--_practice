#include<iostream>
using namespace std;
int output(int a,int b){
    if((a>=40 && a<=50) && (b>=40 && b<=50)) return 1;
    else if((a>=50 && a<=60) || (b>=50 && b<=60)) return 1;
    else return 0;
}
int main(){
    int a;
    int b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<output(a,b)<<endl;
    return 0;
}