#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
    int c=0;
    cin>>t;
    while(t--){
        cin>>x;cin>>y;
        while(x<y){
            if(x<y){  
            x+=8;
            c+=1;
            }
        }
        cout<<c<<endl;
        c=0;
    }
}
