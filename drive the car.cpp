#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,t,n,m,x;
     cin>>t;
     while(t--)
     {
         cin>>n>>j;
         int *arr= new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
            for(m=1;m<n;m++)
            {
                if(arr[0]<arr[m])
                {
                    x=arr[0];
                    arr[0]=arr[m];
                    arr[m]=x;
                }
            }
         if(arr[0]-j<=0)
         {
             cout<<-1<<endl;
         }
         else
         {
             cout<<arr[0]-j<<endl;
         }
         delete [] arr;
     }       
	//code
	return 0;
}
