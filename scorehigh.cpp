#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,n,a,b,c,d;
    cin>>t;
    while(t--){
        cin>>n;cin>>a;cin>>b;cin>>c;cin>>d;
        if(a>=b && a>=c && a>=d) cout<<a<<endl;
        else if(b>=c && b>=d && b>=a) cout<<b<<endl;
        else if(c>=a && c>=b && c>=d) cout<<c<<endl;
        else if(d>=a && d>=b && d>=c) cout<<d<<endl;
    }
    
}
