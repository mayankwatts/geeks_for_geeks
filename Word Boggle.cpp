#include<bits/stdc++.h>
using namespace std;
void func(string* arr,int k,string s){
    vector<string> v;
    for(int i=0;i<k;i++){
        string temp=s;
        int flag=1;
        int j=0;
        while(j<arr[i].length()){
            for(int p=0;p<temp.length();p++){
                if(arr[i][j]==temp[p]){
                    temp.erase(temp.begin()+p);
                    flag=0;
                    break;
                }
            }
            if(flag){
                break;
            }
            flag=1;
            j++;
        }
        if(j==arr[i].length()){
            v.push_back(arr[i]);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(i==0){
            cout<<v[i]<<" ";
        }
        else{
            if(i>0 && v[i-1]!=v[i]){
                cout<<v[i]<<" ";
            }
        }
    }
    if(v.size()==0){
        cout<<"-1";
    }
    cout<<endl;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    string* dic=new string[k];
	    for(int i=0;i<k;i++){
	        cin>>dic[i];
	    }
	    int n,m;
	    cin>>n>>m;
	    string s="";
	    char** arr=new char*[n];
	    for(int i=0;i<n;i++){
	        arr[i]=new char[m];
	        for(int j=0;j<m;j++){
	            cin>>arr[i][j];
	            s+=arr[i][j];
	        }
	    }
	    func(dic,k,s);
	    delete[] dic;
	    for(int i=0;i<n;i++){
	        delete[] arr[i];
	    }
	    delete[] arr;
	}
	return 0;
}
