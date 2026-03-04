#include<iostream>
using namespace std;

int main(){
    int t,n;

    cin>>t;

    while(t--){
        cin>>n;

        int sum=0,a;

        for(int i=0;i<n;i++){
            cin>>a;
            sum+=a;
        }

        if(sum % n == 0)
            cout<<n<<endl;
        else
            cout<<sum % n<<endl;
    }

    return 0;
}
