#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
        int a[n];
        int c=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
        }
        
        for(int i=1;i<=a[n];i++){
            if(a[0]==a[i]){
                c=0;
            }
            else{
                c+=1;
            }
        }
    
        cout<<c<<endl;
        c=0;
	}
	
}
