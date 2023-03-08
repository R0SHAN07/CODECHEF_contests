#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a;cin>>b;cin>>c;
        if(((a+b)/2)<35 ||((a+c)/2)<35 || ((b+c)/2)<35) cout<<"Fail"<<endl;
        else cout<<"Pass"<<endl;
    }
}
