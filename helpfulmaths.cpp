#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int len;
    string s;
    cin>>s;
    if (s.length()%2==0){
        len=s.length()-(s.length()/2)+1;
    }
    else{
        len=s.length()-(s.length()/2);
    }
    vector<int> arr(len);
    int k=0;
    
    for(int i=0;i<s.length();i+=2){
        arr[k]=(s[i]-'0');
        k++;
    }
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp=arr[j];
                arr[j]=arr[j + 1];
                arr[j + 1]=temp;
            }
        }
    }
    string out;
    for (int j=0;j<arr.size();j++){
        out+=to_string(arr[j]);
        if (j==arr.size()-1){
            break;
        }
        else{
            out+="+";
        }
    }
    cout<<out<<endl;
}