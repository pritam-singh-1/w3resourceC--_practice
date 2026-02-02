#include<iostream>
using namespace std;
string add(string s){
    if(s.length()<3){
        return s + s + s;
    }
    else{
        string a = s.substr(0,3);
        return a + s + a;
    }
}
int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    cout<<add(s)<<endl;
    return 0;

}