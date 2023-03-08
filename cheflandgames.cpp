#include <iostream>
using namespace std;

int main() {
    int T,n;
    int s=0;
    cin>>T;
    while(T--){
        for(int i=1;i<=4;i++){
        cin>>n;
        if(n==0){
            s++;
        }
        }
        if(s==4) cout<<"IN"<<endl;
        else cout<<"OUT"<<endl; 
        s=0; 
    }
} 
    
