#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n,c=0;
    vector<char> order(50);
    string s;
    cin>>n;
    cin>>s;
    for (int i=0;i<n;i++){
        order[i]=s[i];
    }
    for (int i=0;i<n-1;i++){
        if (order[i]==order[i+1]){
            c++;
        }
    }
    cout<<c<<endl;
}