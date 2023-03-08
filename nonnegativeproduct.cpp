#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	   long long int pos=0,neg=0,zero=0;
	    long long int n;
	    cin>>n;

	    long long int a[n];
	    for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
	    for(int i=0;i<n;i++)
      {
	        if(a[i]==0)
          zero++;
	        if(a[i]>0)
	         pos++; 
	        else
	         neg++;
      }
	    if(zero>=1 || pos==n)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	     {
	         if(neg%2==0)
	          cout<<"0"<<endl;
	         else
	          cout<<"1"<<endl;
	     }
    }
return 0;
}