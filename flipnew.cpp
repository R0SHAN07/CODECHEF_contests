#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int T,x,n;
    cin>>T;
    while(T--){
        cin>>n;
        cin>>x;
        if(x>n-x) cout<<n-x<<endl;
        else cout<<x<<endl;
    
}
}
