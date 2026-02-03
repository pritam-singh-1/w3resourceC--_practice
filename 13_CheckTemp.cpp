#include<iostream>
using namespace std;
string checkTemp(int x, int y){
    if((x<0 || x>100) && (y<0 || y>100)){
        return "True";
    }
    else{
        return "False";
    }
}
int main(){
    int x,y;
    cout<<"Enter the Temperature "<<endl;
    cin>>x>>y;
    cout<<checkTemp(x,y)<<endl;
    return 0;
}