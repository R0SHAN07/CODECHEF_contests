#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    float a,b,c;
	cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        cin>>c;
        if(((a+b)/2)>c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}