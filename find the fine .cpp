#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,d,n,t;
     cin>>t;
     while(t--)
     {
         int l;
         cin>>n>>d;
         int arr[n],fine[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<n;i++)
         {
             cin>>fine[i];
         }
         if(d%2==0)
         {
             l=0;
            for(i=0;i<n;i++)
            {
                if(arr[i]%2==1)
                {
                    l=fine[i]+l;
                }
            }
            cout<<l<<endl;
         }
         if(d%2==1)
         {
             l=0;
            for(i=0;i<n;i++)
            {
                if(arr[i]%2==0)
                {
                    l=fine[i]+l;
                }
            }
            cout<<l<<endl;
         }
         
     }
	//code
	return 0;
}
