#include<iostream>
#include<string>
using namespace std;
string remove(string s){
    if(s.substr(1,2) == "yt"){
        s.erase(1,2);
    return s;
    }
    else{
        return s;
    }
}
int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    cout<<"The string after removing yt at index 1: "<<endl<<remove(s)<<endl;
    return 0;
}