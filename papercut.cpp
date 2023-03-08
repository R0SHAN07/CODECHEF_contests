#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t,x,y;
    int c=0;
    cin>>t;
    while(t--){
        cin>>x;
        cin>>y;
        if(x==y) c=1;
        else{
            while(x>=y){
                x=x-y;
                c+=1;
            }
        }
        cout<<c*c<<endl;
        c=0;
    }
    
}
