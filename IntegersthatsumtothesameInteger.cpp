#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int i,j,n;
    int sum=0;
    cin>>n;
    for(i=1;i<=100;i++){
        for(j=1;j<=100;j++){
            if(i+j==n){
                sum++;
            }
            
        }
    }
    cout<<sum;
}


