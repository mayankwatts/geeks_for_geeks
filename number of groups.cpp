#include<iostream>
using namespace std;
int main()
 {
     int i,k,j,n,t,l;
     cin>>t;
     while(t--)
     {
         l=0;
         cin>>n;
         int *arr= new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<n;i++)
         {
             for(j=i+1;j<n;j++)
             {
                 if((arr[i]+arr[j])%3==0)
                 {
                     l++;
                 }
             }
         }
         for(i=0;i<n;i++)
         {
            for(j=i+1;j<n;j++) 
            {
                for(k=j+1;k<n;k++)
                {
                     if((arr[i]+arr[j]+arr[k])%3==0)
                    {
                        l++;
                    }
                }
             }
         }
         cout<<l<<endl;
         delete [] arr;
         
     }
	//code
	return 0;
}
