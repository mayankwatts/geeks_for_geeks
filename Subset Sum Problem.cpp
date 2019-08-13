  #include<bits/stdc++.h>
  using namespace std;
  
  int count(int* arr,int n,int sum,int i){
  if(sum==0){
        return true;
    }
    if(i>=n || sum<0){
        return false;
    }
    int x1=false;
    x1=func(arr,n,sum-arr[i],i+1);
    if(x1==1){
        return true;					
    }
    x1=func(arr,n,sum,i+1);
    return x1;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int* arr=new int[n];
	    int x=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        x+=arr[i];
	    }
	    if(x%2==1){
	        cout<<"NO"<<endl;
	        continue;
	    }
	    else{
	        
	        int count=func(arr,n,(x/2),0);
	        if(count){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}

