#include<iostream>
using namespace std;
int main(){
    int n,awin=0,dwin=0;
    string s;
    cin>>n;
    cin>>s;
    for (int i=0;i<n;i++){
        if (s[i]=='A'){
            awin++;
        }
        else{
            dwin++;
        }
    }
    if (awin>dwin){
        cout<<"Anton"<<endl;
        return 0;
    }
    else if(dwin>awin){
        cout<<"Danik"<<endl;
        return 0;
    }
    cout<<"Friendship"<<endl;
    return 0;
}