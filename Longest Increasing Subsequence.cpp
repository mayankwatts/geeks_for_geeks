#include<bits/stdc++.h>
using namespace std;

int func(int* arr,int n,int i,int prev,int** dp){
    if(i==n){
        return 0;
    }
    if(dp[i][prev]!=-1){
        return dp[i][prev];
    }
    int x1=0;
    if(arr[i]>arr[prev]){
       x1=1+func(arr,n,i+1,i,dp); 
    }
    int x2=func(arr,n,i+1,prev,dp);
    return dp[i][prev]=max(x1,x2);
}

int main(){
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   int* arr=new int[n];
	   for(int i=0;i<n;i++){
	       cin>>arr[i];
	   }
	   int** dp=new int*[n];
	   for(int i=0;i<n;i++){
	       dp[i]=new int[n];
	       for(int j=0;j<n;j++){
	           dp[i][j]=-1;
	       }
	   }
	   int maxi=0;
	   for(int i=0;i<n;i++){
	       maxi=max(maxi,1+func(arr,n,i+1,i,dp));
	   }
	   cout<<maxi<<endl;
	}
	return 0;
}
