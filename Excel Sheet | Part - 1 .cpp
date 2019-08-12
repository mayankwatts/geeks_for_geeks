#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    string s="";
	    while(n!=0){
	        n--;
	        int ans=n%26;
	        s+=char(ans+'A');
	        n/=26;
	    }
	    reverse(s.begin(),s.end());
	    cout<<s<<endl;
	}
	return 0;
}
