#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    reverse(s.begin(),s.end());
    if (s==t){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}