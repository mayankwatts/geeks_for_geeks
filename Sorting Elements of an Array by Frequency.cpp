#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
void func(int* arr,int n){
    int max=0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]=mp[arr[i]]+1;
        if(mp[arr[i]]>max){
            max=mp[arr[i]];
        }
    }
    vector<int>* dp=new vector<int>[max+1];
    for(auto it=mp.begin();it!=mp.end();it++){
        dp[it->second].push_back(it->first);
    }
    for(int i=max;i>0;i--){
        sort(dp[i].begin(),dp[i].end());
        for(int j=0;j<dp[i].size();j++){
            for(int k=0;k<i;k++){
                cout<<dp[i].at(j)<<" ";
            }
            
        }
    }
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
