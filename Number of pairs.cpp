#include<bits/stdc++.>
using namespace std;
long long int func(int* arr1, int n, int* arr2, int m){
    int temp[5]={};
    sort(arr2,arr2+m);
    for(int i=0;i<m;i++){
        if(arr2[i]<5){
            temp[arr2[i]]++;
        }
    }
    
    long long int ans=0;
    for(int i=0;i<n;i++){
        if(arr1[i]==0){
            continue;
        }
        if(arr1[i]==1){
            ans+=temp[0];
            continue;
        }
        int* id=upper_bound(arr2,arr2+m,arr1[i]);
        ans+=(arr2+m)-id;
        
        ans+=(temp[0]+temp[1]);
        
        if(arr1[i]==2){
            ans-=(temp[3]+temp[4]);
        }
        if(arr1[i]==3){
            ans+=temp[2];
        }
        
    }
    return ans;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int *arr1=new int[n];
	    int *arr2=new int[m];
	    for(int i=0;i<n;i++){
	        cin>>arr1[i];
	    }
	    for(int i=0;i<m;i++){
	        cin>>arr2[i];
	    }
	    
	    cout<<func(arr1,n,arr2,m)<<endl;
	    
	}
	return 0;
}
