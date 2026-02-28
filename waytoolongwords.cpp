#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<string> order(100);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>order[i];
    }
    for (int i=0;i<n;i++){
        if (order[i].size()>10){
            string s=string(1,order[i][0])+to_string(order[i].size()-2)+string(1,order[i][order[i].size()-1]);
            cout<<s<<endl;
        }
        else{
            cout<<order[i]<<endl;
        }
    }
    return 0;
}