#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>arr(n),ans(n,-1);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]<arr[i]){
                ans[i]=arr[j];
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}