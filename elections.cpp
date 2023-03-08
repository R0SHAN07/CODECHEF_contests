#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,A,B,C;
    cin>>t;
    while(t--){
        cin>>A;cin>>B;cin>>C;
        if(A>50) cout<<"A"<<endl;
        else if(B>50) cout<<"B"<<endl;
        else if(C>50) cout<<"C"<<endl;
        else cout<<"NOTA"<<endl;
    }
}
