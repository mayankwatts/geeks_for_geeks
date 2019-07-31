#include<bits/stdc++.h>
using namespace std;
void func(int n){
    bool* prime=new bool[n+1];
    memset(prime,true,n+1);
    prime[0]=false;
    prime[1]=false;
    for(int p=2;p*p<=n;p++){
        if(prime[p]){
            for(int i=p*p;i<=n;i+=p){
                prime[i]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i] && prime[n-i]){
            cout<<i<<" "<<n-i;
            return;
        }
    }
    cout<<"-1";
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    func(n);
	    cout<<endl;
	}
	return 0;
}
