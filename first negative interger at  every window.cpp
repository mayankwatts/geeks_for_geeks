#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,n,t,l,a;
     cin>>t;
     while(t--)
     {
         cin>>n;
         int *arr=new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         cin>>k;
         for(i=0;i<=n-k;i++)
         {
             l=0;
             for(j=0;j<k;j++)
             {
                 if(l==0)
                 {
                    a=arr[i+j];
                    if(a<0)
                    {
                        cout<<arr[i+j]<<" ";
                        l++;
                    }
                 }
             }
             if(l==0)
             {
                 cout<<0<<" ";
             }
         }
         cout<<endl;
         delete [] arr;
     }
	//code
	return 0;
}
