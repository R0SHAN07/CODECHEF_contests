#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int T,x,n;
    cin>>T;
    while(T--){
        cin>>n;
        cin>>x;
        if(n==x){
            cout<<"0"<<endl;
        }
        else if(n/2>x) {
            cout<<x<<endl;
        }
        else{
            cout<<(n-x)<<endl;
        }
        }
	return 0;
}
