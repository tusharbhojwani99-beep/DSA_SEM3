// input - 1 3 2 5 3 4
// output - 3 5 5 -1 4 -1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n),ans(n,-1);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                ans[i]=arr[j];
              break;
            }
        }
    }
        for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}