#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int main(){
    vector<vector<int>> nums(5,vector<int>(5));
    int row,column;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cin>>nums[i][j];
            if (nums[i][j]==1){
                row=i;column=j;
            }
        }
    }
    cout<<(abs(row-2)+abs(column-2))<<endl;
    return 0;
}