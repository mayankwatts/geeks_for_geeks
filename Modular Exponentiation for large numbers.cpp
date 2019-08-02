#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,a,b,c;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
	    int x=a%c;
	    for(int i=1;i<b;i++){
	        x=(x*a)%c;
	    }
	    cout<<x<<endl;
	}
	return 0;
}
