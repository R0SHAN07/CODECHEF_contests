#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x;cin>>y;cin>>z;
        if(z>=(x+y)) cout<<"2"<<endl;
        else if(z>=x && z<(x+y)) cout<<"1"<<endl;
        else if (z<x) cout<<"0"<<endl;
    }
}
