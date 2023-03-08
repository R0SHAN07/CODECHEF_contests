#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char r[n];
        cin>>r;
        for (int i = 0;i<n;i++)
        {
            if(r[i]=='A'||r[i]=='a')
            {
                r[i] = 'T';
            }
            else if(r[i]=='T'||r[i]=='t')
            {
                r[i] = 'A';
            }
            else if(r[i]=='C'||r[i]=='c')
            {
                r[i] = 'G';
            }
            else if (r[i]=='G'||r[i]=='g')
            {
                r[i] = 'C';
            }
        }
        cout<<r<<"\n";
    }
    
	return 0;
}
