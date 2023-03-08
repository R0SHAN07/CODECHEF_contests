#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
    cin>>t;
    while(t--){
        cin>>a;cin>>b;
        if(5*b==10*a) cout<<"ANY"<<endl;
        else if(5*b>10*a) cout<<"SECOND"<<endl;
        else cout<<"FIRST"<<endl;
    }
}
