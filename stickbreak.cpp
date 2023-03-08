#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,l,k;
    cin>>t;
    while(t--){
        cin>>l;
        cin>>k;
        if (l%k==0) cout<<"0"<<endl;
        else cout<<"1"<<endl;
    }
    
}
