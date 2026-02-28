#include<iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int,int> order;
    int t,n;
    cin>>t;
    for (int i=1;i<=t;i++){
        cin>>n;
        int sum=0;
        int j=1;
        int a;
        for (j=1;j<=n;j++){
            cin>>a;
            sum+=a;
        }
        order[j]=sum;
    }
    for (auto it: order){
        if ((it.second%it.first)==0){
            cout<<it.first<<endl;
        }
        else{
            cout<<(it.second%it.first)<<endl;
        }
    }
    return 0;
}