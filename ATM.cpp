#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,k,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>k;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x<=k){
                k=k-x;
                cout<<"1";
            }
            else cout<<"0";
        }
        cout<<" "<<endl;
    }
}
