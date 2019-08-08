#include<bits/stdc++.h>
using namespace std;
void func(int n){
    vector<int> v;
    int x=1;
    int j=0;
    int i=1;
    while(j<n){
        while(j<pow(10,i) && j<n){
            if(i==1){
                v.push_back(j);
                j++;
            }
            else{
                int a=v[x]%10;
                int b=a-1;
                int c=a+1;
                if(b>=0 && b<10){
                    if(v[x]*10+b<=n)
                    v.push_back(v[x]*10+b);
                    j=v[x]*10+b;
                }
                if(c>=0 && c<10){
                    if(v[x]*10+c<=n)
                    v.push_back(v[x]*10+c);
                    j=v[x]*10+c;
                }
               x++; 
            }
        }
        i++;
    }
    for(int k=0;k<v.size();k++){
        cout<<v[k]<<" ";
    }
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
