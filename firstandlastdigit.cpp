// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include<bits/stdc++.h>

using namespace std;


int main()
{
   
   int t,n,r;
   cin>>t;
   while(t--){
        cin>>n;
        r=n%10;
        while(n>9){
            n=n/10;
        }
        cout<<n+r<<endl;
   }

}


