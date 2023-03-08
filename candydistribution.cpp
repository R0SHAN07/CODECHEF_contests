#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m;
    cin>>t;
    while(t--){
        cin>>n;cin>>m;
        if((n%m)!=0 || ((n/m)%2!=0)) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}
