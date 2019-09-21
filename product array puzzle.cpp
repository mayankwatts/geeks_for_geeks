#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,n,t,x;
     cin>>t;
     while(t--)
     {
         cin>>n;
         int *arr=new int[n];
         int *a=new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<n;i++)
         {
             x=1;
            for(j=0;j<n;j++)
            {
                if(j!=i)
                {
                    x=arr[j]*x;
                }
            }
            a[i]=x;
         }
         for(i=0;i<n;i++)
         {
            cout<<a[i]<<" ";   
         }
         cout<<endl;
     }
	//code
	return 0;
}
