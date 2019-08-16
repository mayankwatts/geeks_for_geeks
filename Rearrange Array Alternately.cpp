#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int* arr=new int[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int i=0;
	    int j=n-1;
	    while(i<=j){
	        cout<<arr[j]<<" ";
	        j--;
	        if(i<=j){
	            cout<<arr[i]<<" ";
	            i++;
	        }
	    }
	    cout<<endl;
	    delete[] arr;
	}
	return 0;
}
