#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    vector<string> fun(150);
    for (int i=0;i<n;i++){
        cin>>fun[i];
    }
    for (int i=0;i<n;i++){
        if (fun[i]=="X++"){
            x++;
        }
        else if(fun[i]=="X--"){
            x--;
        }
        else if(fun[i]=="++X"){
            ++x;
        }
        else if(fun[i]=="--X"){
            --x;
        }
    }
    cout<<x<<endl;
    return 0;
}