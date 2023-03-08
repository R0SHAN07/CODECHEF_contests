#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,w,x,y,z;
    cin>>t;
    while(t--){
        cin>>w;cin>>x;cin>>y;cin>>z;
        z=(x-y)*z;
        w=w+z;
        cout<<w<<endl;
    }
}
