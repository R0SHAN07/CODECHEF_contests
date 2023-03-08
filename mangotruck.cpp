#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x;cin>>y;cin>>z;
        if((x+y)>z) cout<<"0"<<endl;
        else {
            cout<<((z-y)/x)<<endl;
    }
}
}
