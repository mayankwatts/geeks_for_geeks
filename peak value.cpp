#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		bool f=0;
		int A = peakElement(a,n);
		
		if(n==1)
		f=1;
		else
		if(A==0 and a[0]>=a[1])
		f=1;
		else if(A==n-1 and a[n-1]>=a[n-2])
		f=1;
		else if(a[A] >=a[A+1] and a[A]>= a[A-1])
		f=1;
		else
		f=0;
		
		cout<<f<<endl;
		
	}
	return 0;
}
}
int peakElement(int arr[], int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        if(arr[0]<arr[i])
        {
            arr[0]=j;
            arr[0]=arr[i];
            arr[i]=j;
        }
    }
    return 0;
   // Your code here
}
