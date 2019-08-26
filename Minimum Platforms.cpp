#include<bits/stdc++.h>
using namespace std;
int func(int* a,int* b,int n){
    int i=1;
    int j=0;
    int count=1;
    while(i<n){
        if(a[i]<=b[j]){
            count++;
            i++;
        }
        else{
            i++;
            j++;
        }
    }
    return count;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	   int n;
	   cin>>n;
	   int* a=new int[n];
	   int* b=new int[n];
	   for(int i=0;i<n;i++){
	       cin>>a[i];
	   }
	   for(int i=0;i<n;i++){
	       cin>>b[i];
	   }
	   sort(a,a+n);
	   sort(b,b+n);
	   cout<<func(a,b,n)<<endl;;
	}
	return 0;
}
