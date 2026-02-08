#include<iostream>
using namespace std;
int larger(int a, int b){
    if ((a<=20 || a>=30) && (b<=20 || b>=30)){
        return 0;
    }
    else {
        if((a>b) && (a>=20 && a<=30)){
            return a;
        }
        else if((b>a) && (b>=20 && b<=30)){
            return b;
        }
    }
}
int main(){
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"The larger number is: "<<larger(a,b)<<endl;
    return 0;
}
