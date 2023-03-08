#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int arr[10][10],a,b,c,d;
	int t;
    cin>>t;
    while(t--){
        cin>>a;cin>>b;cin>>c;cin>>d;
        if(a!=c && b!=d) cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
}
