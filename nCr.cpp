#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007 
long long int func(int n,int k,long long int** dp){
    if(k==0 || k==n){
        dp[n][k]=1;
        return 1;
    }
    if(dp[n][k]>0){
        return dp[n][k]%mod;
    }
    dp[n][k]=(func(n-1,k-1,dp)%mod+func(n-1,k,dp)%mod)%mod;
    
    return dp[n][k]%mod;
}

int main()
 {
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    if(n>=k){
	        long long int** dp=new  long long int*[n+1];
	        for(int i=0;i<n+1;i++){
	            dp[i]=new long long int[n+1];
	            for(int j=0;j<n+1;j++){
	                dp[i][j]=0;
	            }
	        }
	        cout<<func(n,k,dp)<<endl;
	        for(int j=0;j<n+1;j++){
	            delete[] dp[j];
	        }
	        delete[] dp;
	   }
	   else{
	       cout<<"0"<<endl;
	   }
	    
	}
	return 0;
}
