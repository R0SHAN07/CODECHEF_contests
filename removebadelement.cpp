#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){cin>>a[i];}
	    
	    sort(a,a+n);
	    int c=1;
	    int maxele=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(a[i]==a[i-1])
	         c++;
	         else
	         c=1;
	         maxele=max(maxele,c);
	    }
cout<<n-maxele<<endl;	}
}