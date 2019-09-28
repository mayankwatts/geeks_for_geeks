#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,n,t;
     cin>>t;
     while(t--)
     {
         cin>>n>>k;
         int *arr=new int[n];
         int *a=new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<n-k;i++)
         {
             a[i]=arr[k+i];
         }
         for(i=n-k;i<n;i++)
         {
             a[i]=arr[i-(n-k)];
         }
         for(i=0;i<n;i++)
         {
             cout<<a[i]<<" ";
         }
         cout<<endl;
         delete [] arr;
         delete [] a;
     }
	//code
	return 0;
}
