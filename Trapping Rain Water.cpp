#include<bits/stdc++.h>
using namespace std;
int func(int arr[],int n){
    vector<int> lr;
    vector<int> rl;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            lr.push_back(i);
            max=arr[i];
        }
    }
    max=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=max){
            rl.push_back(i);
            max=arr[i];
        }
    }
    int sum=0;
    for(int i=0;i<lr.size()-1;i++){
        if((lr[i+1]-lr[i])>1){
            for(int j=lr[i]+1;j<lr[i+1];j++){
                if(arr[j]<=arr[lr[i]]){
                    sum+=arr[lr[i]]-arr[j];
                }
            }
        }
        
    }
    
    for(int i=0;i<rl.size()-1;i++){
        if(rl[i]==lr[lr.size()-1]){
            break;
        }
        if((rl[i]-rl[i+1])>1){
            for(int j=rl[i]-1;j>rl[i+1];j--){
                if(arr[j]<=arr[rl[i]]){
                    sum+=arr[rl[i]]-arr[j];
                }
            }
            
        }
        
    }
    return sum;
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
	    cout<<func(arr,n)<<endl;
	    delete[] arr;
	}
	return 0;
}
