#include<bits/stdc++.h>
using namespace std;
void maxSum(int arr[],int n){
    int dp[n]={0};
    dp[0]=arr[0];
    
    int i=1;
    while(i<n){
        if(arr[i]+dp[i-1]>arr[i]){
            dp[i]=arr[i]+dp[i-1];
        }
        else{
            dp[i]=arr[i];
        }
        i++;
    }
    int max=INT_MIN;
    
    /*
    for(int j=1;j<n;j++){
        if(dp[j]!=arr[j]){
            while(dp[j]!=arr[j] && j<n){
                j++;
            }
            if(dp[j-1]>max){
                max=dp[j-1];
            }
        }
        else{
            j++;
        }
    }*/
    
    for(int i=0;i<n;i++){
        if(dp[i]>max){
            max=dp[i];
        }
    }
    
    cout<<max<<endl;
    
}
int main()
 {
	int t,n;
	cin>>t;
	
	while(t--){
	    cin>>n;
	    int* arr=new int[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    maxSum(arr,n);
	}
	return 0;
}
