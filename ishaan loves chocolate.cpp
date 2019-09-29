#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,n,t;
     cin>>t;
     while(t--)
     {
         cin>>n;
         int *arr=new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(j=1;j<n;j++)
         {
             if(arr[0]>arr[j])
             {
                 k=arr[0];
                 arr[0]=arr[j];
                 arr[j]=k;
             }
         }
         cout<<arr[0]<<endl;
     }
	//code
	return 0;
}
