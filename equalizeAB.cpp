#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,a,b,x;
    cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        cin>>x;
        if(a==b) cout<<"YES"<<endl;
        
        while(a!=b){
        a=a+x;
        b=b-x;
        if(a==b) cout<<"YES"<<endl;
        else if{
            a=a-x;
            b=b+x;
        }
        }
        }
        cout<<"NO"<<endl;
    }
