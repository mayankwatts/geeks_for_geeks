#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,n,t;
     cin>>t;
     while(t--)
     {
         k=1;
         j=0;
         cin>>n;
         int *arr=new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=1;i<n;i++)
         {
             if(arr[i]>arr[j])
             {
                 k++;
                 j=i;
             }
         }
         cout<<k<<endl;
         delete [] arr;
     }
	//code
	return 0;
}
