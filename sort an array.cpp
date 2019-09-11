#include<iostream>
using namespace std;
int main()
 {
     int i,j,n,t,x;
     cin>>t;
     while(t--)
     {
         cin>>n;
         int *arr=new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
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
             cout<<arr[i]<<" ";
         }
         cout<<endl;
     }
	//code
	return 0;
}
