#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,n,t,l;
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
                    k=arr[i];
                    arr[i]=arr[j];
                    arr[j]=k;
                }
             }
         }
         if(n==1)
         {
             cout<<arr[0];
         }
         if(n>1)
         {
            int i=0;
            int j=n-1;
            while(j>=i){
                cout<<arr[j]<<" ";
                j--;
                if(j>=i){
                    cout<<arr[i]<<" ";
                }
                i++;
            }
         }
         cout<<endl;
     }
	//code
	return 0;
}
