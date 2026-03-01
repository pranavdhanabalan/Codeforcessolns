#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<char,int> freq;
    string str;
    cin>>str;
    for (int i=0;i<str.length();i++){
        freq[str[i]]++;
    }
    if(freq.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}