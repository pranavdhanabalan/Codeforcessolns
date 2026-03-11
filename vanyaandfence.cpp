#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,h,sum=0;
    cin>>n>>h;
    vector<int> order(n),ans(n,1);
    for (int i=0;i<n;i++){
        cin>>order[i];
    }
    for (int i=0;i<n;i++){
        if (order[i]>h){
            ans[i]++;
        }
    }
    for (int i=0;i<n;i++){
        sum+=ans[i];
    }
    cout<<sum<<endl;
}