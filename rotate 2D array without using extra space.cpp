#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,n,t;
     cin>>t;
     while(t--)
     {
        cin>>n;
        int **arr=new int*[n];
        for(i=0;i<n;i++)
        {
            arr[i]=new int[n];
            for(j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=n-1;j>=0;j--)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        cout<<endl;
        for(i=0;i<n;i++)
        {
            delete [] arr[i];
        }
        delete [] arr;
     }
	//code
	return 0;
}
