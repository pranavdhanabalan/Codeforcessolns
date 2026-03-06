#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string s,ans;
    int up=0,low=0;
    cin>>s;
    for (int i=0;i<s.size();i++){
        if (isupper(s[i])){
            up++;
        }
        else{
            low++;
        }
    }
    if(up==low||low>up){
        for (int i=0;i<s.size();i++){
            ans+=tolower(s[i]);
        }
    }
    else{
        for (int i=0;i<s.size();i++){
            ans+=toupper(s[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}