#include<bits/stdc++.h>
using namespace std;
bool func(string* arr,string s,int i,vector<int>* dp){
    if(i==s.length()){
        return true;
    }
    bool ans=false;
        if(dp[s[i]-97].size()>0){
            int x=i;
            for(int j=0;j<dp[s[i]-97].size();j++){
                string a=arr[dp[s[i]-97][j]];
                if(s.length()-i<a.length()){
                    continue;
                }
                int k=0;
                while(k<a.length()){
                    if(s[x+k]!=a[k] || k>=s.length()-i){
                        break;
                    }
                    k++;
                }
                if(k==s.length()){
                    return true;
                }
                if(k==a.length()){
                    ans=ans||func(arr,s,x+k,dp);
                }
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
	    vector<int> dp[26];
	    string* arr = new string[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    string s;
	    cin>>s;
        for(int i=0;i<n;i++){
            dp[arr[i][0]-97].push_back(i);
        }
	    cout<<func(arr,s,0,dp)<<endl;
	    delete[] arr;
	}
	return 0;
}
