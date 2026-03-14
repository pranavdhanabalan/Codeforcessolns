#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=n+1;;i++){
        int a=i;
        bool flag=true;
        unordered_map<int,int> order;
        for (int j=0;j<4;j++){
            order[a%10]++;
            a/=10;
        }
        for (auto it: order){
            if (it.second!=1){
                flag=false;
                break;
            }
        }
        if (flag==true){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}