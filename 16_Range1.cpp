#include<iostream>
using namespace std;

int check(int a,int b){
    if((20<=a && a<=50)&&(20<=b && b<=50))
        return 0;
    else
        return 1;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"The given no is in range: "<<check(a,b)<<endl;
    return 0;
}