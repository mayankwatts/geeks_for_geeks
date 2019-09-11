#include<iostream>
using namespace std;
int main()
 {
     int i,n,t,x;
     cin>>t;
     while(t--)
     {
         x=0;
         cin>>n;
         for(i=1;i<=n+1;i++)
         {
             x=x+i;
         }
         cout<<x<<endl;
     }
	//code
	return 0;
}
