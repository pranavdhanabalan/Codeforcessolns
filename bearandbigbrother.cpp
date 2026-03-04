#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int suma=a,sumb=b,c=0;
    while(suma<=sumb){
        suma*=3;
        sumb*=2;
        c++;
    }
    cout<<c<<endl;
    return 0;
}