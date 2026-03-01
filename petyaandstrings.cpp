#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string a,b,a1,b1;
    cin>>a;
    cin>>b;
    for (int i=0;i<a.length();i++){
            a1+=tolower(a[i]);
    }
    for (int i=0;i<b.length();i++){
            b1+=tolower(b[i]);
    }
    if (a1==b1){
        cout<<0<<endl;
    }
    else if(b1<a1){
        cout<<1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}