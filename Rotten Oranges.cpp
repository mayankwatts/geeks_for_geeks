#include<bits/stdc++.h>
using namespace std;
int func(int** arr,int n,int m,bool** visited){
    int days=0;
    int count;
    while(true){
        int s=0;
        count =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==1){
                    count =1;
                }
                if(arr[i][j]==2 && visited[i][j]==false){
                    if(i-1>=0 && arr[i-1][j]==1){
                        s=1;
                        arr[i-1][j]=2;
                        visited[i-1][j]=true;
                    }
                    if(i+1<n && arr[i+1][j]==1){
                        s=1;
                        arr[i+1][j]=2;
                        visited[i+1][j]=true;
                    }
                    if(j-1>=0 && arr[i][j-1]==1){
                        s=1;
                        arr[i][j-1]=2;
                        visited[i][j-1]=true;
                    }
                    if(j+1<m && arr[i][j+1]==1){
                        s=1;
                        arr[i][j+1]=2;
                        visited[i][j+1]=true;
                    }
                }
            }
        }
        if(s==0){
            break;
        }
        if(s==1){
            days+=1;
        }
        for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            visited[i][j]=false;
	        }
	    }
    }
    
    if(count)
    return -1;
    
    return days;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int** arr=new int*[n];
	    for(int i=0;i<n;i++){
	        arr[i]=new int[m];
	        for(int j=0;j<m;j++){
	            cin>>arr[i][j];
	        }
	    }
	    bool** visited=new bool*[n];
	    for(int i=0;i<n;i++){
	        visited[i]=new bool[m];
	        for(int j=0;j<m;j++){
	            visited[i][j]=false;
	        }
	    }
	    cout<<func(arr,n,m,visited)<<endl;
	    for(int i=0;i<n;i++){
	        delete[] arr[i];
	    }
	    delete[] arr;
	}
	return 0;
}
