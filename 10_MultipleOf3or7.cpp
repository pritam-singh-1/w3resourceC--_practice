#include<iostream>
using namespace std;
bool test(int n){
    if(n%3==0 || n%7==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    cout<<test(n)<<endl;
    return 0;
}