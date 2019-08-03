#include<bits/stdc++.h>
using namespace std;
void func(int* arr,int n){
    int max=0;
    int a=0;
    int b=0;
    int flaga=1;
    int flagb=1;
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int* dp=new int[max+1];
    for(int i=0;i<=max;i++){
        dp[i]=0;
    }
    for(int i=0;i<n;i++){
        dp[arr[i]]++;
    }
    for(int i=1;i<=max;i++){
        if(dp[i]==2 && flaga){
            a=i;
            flaga=0;
        }
        if(dp[i]==0 && flagb){
            b=i;
            flagb=0;
        }
        if(!flaga && !flagb){
            break;
        }
    }
    if(b==0){
        b=max+1;
    }
    if(a!=0)
    cout<<a<<" "<<b;
    
    
}
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
	    func(arr,n);
	    cout<<endl;
	    delete[] arr;
	}
	return 0;
}
