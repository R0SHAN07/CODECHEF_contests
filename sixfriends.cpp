#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
    cin>>t;
    while(t--){
        cin>>x;
        cin>>y;
        x=3*x;
        y=2*y;
        if(x<y) cout<<x<<endl;
        else cout<<y<<endl;
    }
}
