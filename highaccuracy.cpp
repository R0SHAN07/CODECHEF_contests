#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%3==0) cout<<"0"<<endl;
        else if(n%3!=0){
            cout<<((int(n/3)+1)*3)-n<<endl;
        }
    }
}
