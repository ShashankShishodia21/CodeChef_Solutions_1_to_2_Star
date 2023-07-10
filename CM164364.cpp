#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0;i<n;i++)
	    {
	        if(a[i+1]!=a[i])
	        c++;
	    }
	    if(n-x>=c)
	    cout<<c<<endl;
	    else
	    cout<<n-x<<endl;
	}
	return 0;
}
