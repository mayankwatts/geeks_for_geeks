#include<bits/stdc++.h>
using namespace std;
void func(string s,int n,int& count,int& flag){
    if(n==0){
        count++;
    }
    if(n>=1){
        if(s[0]=='0'){
            return;
        }
        func(s.substr(1),n-1,count,flag);
    }
    if(n>=2){
        int a=(s[0]-48)*10;
        a+=s[1]-48;
        if(a<=26){
            func(s.substr(2),n-2,count,flag);
        }
        if(a%10==0 && a/10>2){
            flag=1;
            return;
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
	    string s;
	    cin>>s;
	    int count=0;
	    int flag=0;
	    func(s,n,count,flag);
	    if(flag){
	        count=0;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
