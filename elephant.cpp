#include<iostream>
using namespace std;
int main(){
    int x,c=0;
    cin>>x;
    if (x==5||x==4||x==3||x==2||x==1){
        cout<<1<<endl;
        return 0;
    }
    while(x!=0){
        if (x>=5){
            x-=5;
            c++;
        }
        else if(x>=4){
            x-=4;
            c++;
        }
        else if(x>=3){
            x-=3;
            c++;
        }
        else if(x>=2){
            x-=2;
            c++;
        }
        else if(x>=1){
            x-=1;
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}