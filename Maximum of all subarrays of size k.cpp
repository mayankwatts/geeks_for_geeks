  #include<bits/stdc++.h>
  using namespace std;
  
  void func(int* arr,int n,int m){
    vector<int> v;
    deque<int> dq;
    for(int i=0;i<k-1;i++){
        while(!dq.empty() && arr[dq.back()]<=arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k-1;i<n;i++){
        while(!dq.empty() && dq.front()<i-k+1){
            dq.pop_front();
        }
        while(!dq.empty() && arr[dq.back()]<=arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        v.push_back(dq.front());
    }
    for(int i=0;i<v.size();i++){
        cout<<arr[v[i]]<<" ";
    }
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	   int n,m;
	   cin>>n>>m;
	   int* arr=new int[n];
	   for(int i=0;i<n;i++){
	       cin>>arr[i];
	   }
	   func(arr,n,m);
	   cout<<endl;
	}
	return 0;
}
