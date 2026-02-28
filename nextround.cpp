#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,k,c=0,i;
    vector<int> order(150);
    cin>>n>>k;
    for (i=0;i<n;i++){
        cin>>order[i];
        if ((order[i]>0)&&(i<k)){
            c++;
        }
    }
    while(true){
        if ((order[k]==order[k-1])&&(order[k]>0)){
            c++;
        }
        else{
            break;
        }
        k++;
    }
    cout<<c<<endl;
    return 0;
}