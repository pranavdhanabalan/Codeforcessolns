#include<iostream>
using namespace std;
int main(){
    int n,sum=0,a;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a;
        sum+=a;
        if (sum==1){
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY"<<endl;
    return 0;
}