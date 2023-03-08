#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
    cin>>t;
    while(t--){
        cin>>x;
        cin>>y;
        if(x==y) cout<<"ANY"<<endl;
        else if(x<y) cout<<"FIRST"<<endl;
        else cout<<"SECOND"<<endl;
    }
}
