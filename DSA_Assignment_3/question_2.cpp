#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--){
	    int N,M;
	    cin>>N >> M;
	    
	    string A,B;
	    cin>> A >> B;
	    
	    for(int i=0;i<N && i<M;i++){
	        if(A[i]==B[i]){
	            cout<<A[i];
	        }else{
	            break;
	        }
	        
	    }
	        cout<<endl;
	}
	return 0;

}
