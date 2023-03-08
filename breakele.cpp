#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,x;
    int c=0;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                if((a[i]/2)%2!=0){
                    c+=1;
                }
                else if((a[i]/2)%2==0){
                    x=a[i]-1;
                    c+=x;

                }
            }  
        }

        cout<<c<<endl;
        c=0;
    }
}
