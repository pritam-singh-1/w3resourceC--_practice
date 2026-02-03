#include<iostream>
using namespace std;
string check(string s){
    if(s.length()>=2 && s.substr(0,2) == "C#"){
        return "Yes";
    }
    else{
        return "No";
    }
    
}
int main(){
    string s;
    cout<<"Enter a string: "<<endl;
getline(cin,s);
cout<<check(s)<<endl;
return 0;
}