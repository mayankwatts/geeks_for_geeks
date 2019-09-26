#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
 {
     int i,j,k,n,t;
     cin>>t;
     while(t--)
     {
         cin>>n;
         int *arr= new int[n];
         for(i=0;i<n;i++){
             cin>>arr[i];
             }
             cin>>k;
         priority_queue <int> pq;
         for(i=0;i<k;i++)
         {
             pq.push(arr[i]);
         }
         for(i=k;i<n;i++)
         {
             if(arr[i]<pq.top())
             {
                 pq.pop();
                 pq.push(arr[i]);
             }
         }
         cout<<pq.top()<<endl;
         
         
     }
     
	//code
	return 0;
}
