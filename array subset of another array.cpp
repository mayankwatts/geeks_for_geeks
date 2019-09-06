#include<iostream>
using namespace std;
int main()
{
     int i,j,k,l,n,t,m;
     cin>>t;
     while(t--)
     {
         l=0;
         cin>>n>>m;
         int*arr=new int[n];
         int *a=new int[m];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
         }
        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i]==arr[j])
                {
                    l++;
                }
            }
        }
            if(l==m)
            {
                 cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
            delete [] arr;
            delete [] a;
     }
     
	//code
	return 0;
}
