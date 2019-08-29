#include<bits/stdc++.h>
using namespace std;

int func(string s1,string s2,int n,int m,int i,int j,int** dp){
 if(i==n || j==m){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int x1=0;
    if(s1[i]==s2[j]){
       x1=1+func(s1,s2,n,m,i+1,j+1,dp); 
    }
    int x2=func(s1,s2,n,m,i+1,j,dp);
    int x3=func(s1,s2,n,m,i,j+1,dp);
    return dp[i][j]=max(max(x1,x2),x3);
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	   int n,m;
	   cin>>n>>m;
	   string s1,s2;
	   cin>>s1>>s2;
	   int** dp=new int*[n];
	   for(int i=0;i<n;i++){
	       dp[i]=new int[m];
	       for(int j=0;j<m;j++){
	           dp[i][j]=-1;
	       }
	   }
	   cout<<func(s1,s2,n,m,0,0,dp)<<endl;
	   
	}
	return 0;
}
