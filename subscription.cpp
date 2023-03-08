#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;cin>>x;
        if(n%6==0) cout<<(n/6)*x<<endl;
        else cout<<(((int(n/6))+1)*x)<<endl;
    }
}
