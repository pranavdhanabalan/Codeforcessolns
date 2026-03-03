#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,a;
    cin>>s;
    a+=toupper(s[0]);
    for (int i=1;i<s.size();i++){
        a+=s[i];
    }
    cout<<a<<endl;
}