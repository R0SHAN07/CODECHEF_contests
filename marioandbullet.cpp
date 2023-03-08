#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x;cin>>y;cin>>z;
        if(z-(y/x)>=0) cout<<(z-(y/x))<<endl;
        else cout<<"0"<<endl;
    }
}
