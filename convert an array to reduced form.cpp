#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,n,t,x;
     cin>>t;
     while(t--)
     {
         x=0;
         cin>>n;
         int *arr=new int[n];
         int *a=new int [n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<n;i++)
         {
             a[i]=arr[i];
         }
         for(i=0;i<n;i++)
         {
             for(j=i+1;j<n;j++)
             {
                 if(arr[i]>arr[j])
                 {
                     x=arr[i];
                     arr[i]=arr[j];
                     arr[j]=x;
                 }
             }
         }
         for(i=0;i<n;i++)
         {
             for(j=0;j<n;j++)
             {
                 if(a[i]==arr[j])
                 {
                     cout<<j<<" ";
                 }
             }
         }
         cout<<endl;
         delete [] arr;
         delete [] a;     
     }
     
	//code
	return 0;
}
