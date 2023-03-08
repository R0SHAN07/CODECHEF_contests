#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        if(x%25==0) cout<<x/25<<endl;
        else cout<<(int(x/25))+1<<endl;
    }
}
