#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        if(x<=100) cout<<x<<endl;
        else if(100<x && x<=1000) cout<<x-25<<endl;
        else if(1000<x && x<=5000) cout<<x-100<<endl;
        else if(x>5000) cout<<x-500<<endl;

    }
}
