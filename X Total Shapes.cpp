#include<bits/stdc++.h>
using namespace std;
void recur(char** arr,int n,int m,int i,int j){
   if(arr[i][j]=='O'){
        return;
    }
    arr[i][j]='O';
    if(i>0){
        recur(arr,n,m,i-1,j);
    }
    if(i<n-1){
        recur(arr,n,m,i+1,j);
    }
    if(j>0){
        recur(arr,n,m,i,j-1);
    }
    if(j<m-1){
        recur(arr,n,m,i,j+1);
    }
    
}
int func(char** arr,int n,int m){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='X'){
                count++;
                if(i>0){
                    recur(arr,n,m,i-1,j);
                }
                if(i<n-1){
                    recur(arr,n,m,i+1,j);
                }
                if(j>0){
                    recur(arr,n,m,i,j-1);
                }
                if(j<m-1){
                    recur(arr,n,m,i,j+1);
                }
            }
        }
    }
    return count;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	   int n,m;
	   cin>>n>>m;
	   char** arr=new char*[n];
	   for(int i=0;i<n;i++){
	       arr[i]=new char[m];
	       for(int j=0;j<m;j++){
	           cin>>arr[i][j];
	       }
	   }
	   cout<<func(arr,n,m)<<endl;
	}
	return 0;
}
