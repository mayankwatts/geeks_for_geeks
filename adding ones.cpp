#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,t,n;
     cin>>t;
     while(t--)
     {
         cin>>k>>n;
         int *arr= new int[n];
         int *a=new int[k];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<k;i++)
         {
             a[i]=0;
         }
         for(i=0;i<n;i++)
         {
             for(j=arr[i]-1;j<k;j++)
             {
                 a[j]=a[j]+1;
             }
             
         }
         for(i=0;i<k;i++)
         {
             cout<<a[i]<<" ";
         }
         cout<<endl;
     }
	//code
	return 0;
}
