#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,k;
    cin>>t;
    while(t--){
        cin>>n;cin>>x;cin>>k;
        if((n*x)>k) cout<<k/x<<endl;
        else cout<<n<<endl;
    }
}
