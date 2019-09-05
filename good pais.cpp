#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
 {
     int i,j,k,n,t,l;
     cin>>t;
     while(t--)
     {
         l=0;
         cin>>n;
         int *arr=new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<n;i++)
         {
             for(j=0;j<n;j++)
             {
                if(arr[i]<arr[j])
                {
                    l++;
                }
             }
         }
         cout<<l<<endl;
     }
	//code
	return 0;
}
