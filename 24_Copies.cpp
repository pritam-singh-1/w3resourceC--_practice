#include<iostream>
using namespace std;
string copies(string s,int n){
    string res = "";
    for(int i = 0 ;i<n;i++){
        res += s;
    }
    return res;
}
int main(){
    string s;
    int n;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    cout<<"Enter the number of copies: "<<endl;
    cin>>n;
    cout<<"The output is: "<<copies(s,n)<<endl;
    return 0;
}