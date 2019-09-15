#include<iostream>
using namespace.std;
{
    int i,j,k,t,n,l;
    cin>>t;
    while(t--)
    {
        l=0;
        cin>>n;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                n=n-i;
                l++;
                i=0;
            }
        }
        if(l%2==1)
        {
            cout<<1<<endl;
        }
        if(l%2==0)
        {
            cout<<0<<endl;
        }
    }
    
	//code
	return 0;
}
