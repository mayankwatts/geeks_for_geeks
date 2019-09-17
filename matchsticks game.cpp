#include<iostream>
using namespace std;
int main()
 {
     long long int i,j,t;
     cin>>t;
     while(t--)
     {
         cin>>j;
         if(j%5==0)
         {
             cout<<-1<<endl;
         }
         else{
             cout<<j%5<<endl;
         }
     }
	//code
	return 0;
}
