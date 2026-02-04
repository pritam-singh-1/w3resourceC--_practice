#include<iostream>
using namespace std;
int range(int a,int b,int c){
    if((20<=a && a<=50)||(20<=b && b<=50)||(20<=c && c<=50))
        return 1;
    else
        return 0;
}

int main(){
    int a,b,c;
    cout<<"Enter the three numbers: "<<endl;
    cin>>a>>b>>c;
    cout<<"The given no is in range: "<<range(a,b,c)<<endl;
    return 0;
}