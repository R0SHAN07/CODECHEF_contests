#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,x;
	cin>>t;
    while(t--){
        cin>>x;
        if(x*0.10<100) cout<<100<<endl;
        else cout<<x*0.10<<endl;
    }
}
