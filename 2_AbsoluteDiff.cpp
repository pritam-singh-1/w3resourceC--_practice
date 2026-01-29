#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;
    if(a>51){
        cout<<"The triple of difference is "<<3*(a-51);
    }
    else{
        cout<<"The difference is "<<51-a;
    }
    return 0;

}