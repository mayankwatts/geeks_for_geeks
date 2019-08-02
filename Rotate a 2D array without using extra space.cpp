#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int** arr=new int*[n];
	    for(int i=0;i<n;i++){
	        arr[i]=new int[n];
	        for(int j=0;j<n;j++){
	            cin>>arr[i][j];
	        }
	    }
	    for(int i=0;i<n;i++){
	        for(int j=n-1;j>=0;j--){
	            cout<<arr[j][i]<<" ";
	        }
	    }
	    cout<<endl;
	    for(int i=0;i<n;i++){
	        delete[] arr[i];
	    }
	    delete[] arr;
	}
	return 0;
}
