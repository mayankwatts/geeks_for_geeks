#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
long long int func(int* arr,int n){
    sort(arr,arr+n);
    vector<long long int> v;
    long long int ans=arr[0]+arr[1];
    priority_queue<long long int,vector<long long int>,greater<long long int>> pq;
    for(int i=2;i<n;i++){
        pq.push(arr[i]);
    }
    v.push_back(ans);
    for(int i=2;i<n-1;i++){
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        if(ans>a && ans>b){
            b=a+b;
            v.push_back(b);
        }
        else{
            ans+=a;
            v.push_back(ans);
        }
        pq.push(b);
    }
    
    ans+=pq.top();
    v.push_back(ans);
    ans=0;
    for(int i=0;i<v.size();i++){
        ans+=v[i];
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
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<func(arr,n)<<endl;
	    delete[] arr;
	}
	return 0;
}
