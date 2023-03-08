#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t,n;
    int s=0;
    int l=0;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i;i<n;i++){
            cin>>a[i];
            cout<<a;
            if(a[i]=="0x4ff79ff630") s+=1;
            else if(a[i]=="0xe1127ff5c0") l+=1;
        }
        cout<<s<<l;
    }
}
