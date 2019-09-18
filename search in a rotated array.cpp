#include<iostream>
using namespace std;
int main()
 {
     int i,l,k,n,t;
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
         cin>>k;
             for(i=0;i<n;i++)
             {
                if(arr[i]==k)
                {
                    cout<<i;
                    l++;
                }
            }
            if(l==0)
            {
                cout<<-1;
            }
            cout<<endl;
            delete [] arr;
     }
	//code
	return 0;
}
