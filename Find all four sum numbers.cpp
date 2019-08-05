#include<bits/stdc++.h>
using namespace std;
void func(int* arr, int n, int sum){
    vector<vector<int>> v;
    sort(arr,arr+n);
    
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            int k=j+1;
            int m=n-1;
            while(k<m){
                if(arr[i]+arr[j]+arr[k]+arr[m]<sum){
                    k++;
                }
                else if(arr[i]+arr[j]+arr[k]+arr[m]>sum){
                    m--;
                }
                else{
                    vector<int> vs;
                    vs.push_back(arr[i]);
                    vs.push_back(arr[j]);
                    vs.push_back(arr[k]);
                    vs.push_back(arr[m]);
                    v.push_back(vs);
                    k++;
                    m--;
                }
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(i==0){
            for(int j=0;j<v[i].size();j++){
                cout<<v[i][j]<<" ";
            }
            cout<<"$";
        }
        else{
            int flag=0;
            if(v[i].size()==v[i-1].size()){
                for(int j=0;j<v[i].size();j++){
                    if(v[i-1][j]!=v[i][j]){
                        flag=1;
                        break;
                    }
                }
                if(flag){
                    for(int j=0;j<v[i].size();j++){
                    cout<<v[i][j]<<" ";
                    }
                    cout<<"$";
                }
            }
            else{
                for(int j=0;j<v[i].size();j++){
                    cout<<v[i][j]<<" ";
                }
                cout<<"$";
            }
        }
    }
    if(v.size()==0){
        cout<<"-1";
    }
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,sum;
	    cin>>n>>sum;
	    int* arr=new int[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    func(arr,n,sum);
	    cout<<endl;
	    delete[] arr;
	}
	return 0;
}
