#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    cout<<"Enter the position: "<<endl;
    int x;
    cin>>x;
    cout<<s.erase(x-1,2)<<endl;
    return 0;

}