#include<iostream>
using namespace std;
int output(int a,int b){
    if(a==b) return 0;
    else{
        if((100-a)>(100-b)) return b;
        else return a;
    }
}
int main(){
    int a;
    int b;
    cout<<"Enter Two numbers: "<<endl;
    cin>>a>>b;
    cout<<"Number closest to 100 is:"<<output(a,b)<<endl;
    return 0;
}