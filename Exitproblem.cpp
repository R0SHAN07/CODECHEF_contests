#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int T,x;
    cin>>T;
    while(T--){
        cin>>x;
        if(x<=50 && x>0) cout<<"LEFT"<<endl;
        else cout<<"RIGHT"<<endl;
    }     
}
