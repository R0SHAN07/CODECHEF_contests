#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a;cin>>b;cin>>c;
        if(a>b+c || b>a+c || c>a+b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
