#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
    int o=0;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]<1000) continue;
            else {
                o+=1;
            }
        }
        cout<<o<<endl;
        o=0;   
    }
}
