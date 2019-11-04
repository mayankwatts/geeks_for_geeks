#include<bits/stdc++.h>
using namespace std;
int func(int* arr,int sum,int n){
   bool dp[sum+1][n+1];
    for(int i=0;i<=n;i++){
        dp[0][i]=true;
    }
    for(int i=1;i<=sum;i++){
        dp[i][0]=false;
    }
    for(int i=1;i<=sum;i++){
        for(int j=1;j<=n;j++){
            dp[i][j]=dp[i][j-1];
            if(i>=arr[j-1]){
                dp[i][j]|=dp[i-arr[j-1]][j-1];
            }
        }
    }
    int ans;
    for(int j=sum/2;j>=0;j--){
        if(dp[j][n]){
            ans=sum-j*2;
            break;
        }
    }
    return ans;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   int* arr=new int[n];
	   int sum=0;
	   for(int i=0;i<n;i++){
	       cin>>arr[i];
	       sum+=arr[i];
	   }
	   cout<<func(arr,sum,n)<<endl;
	}
	return 0;
}
