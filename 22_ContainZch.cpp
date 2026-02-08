#include<iostream>
using namespace std;
int check(string s){
    int x=0;
    for(int i=0 ; i< s.length(); i++){
        if(s[i]=='z' ){
            x++;
        }
    }
    if(x>=2 && x<=4){
        return 1;

    }
    else{
        return 0;
    }
}
int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    cout<<"The string contains 'z' character: "<<check(s)<<endl;
    return 0;
}