#include<bits/stdc++.h>
using namespace std;
void func(int* entry,int* exits,int n){
    sort(entry,entry+n);
    sort(exits,exits+n);
    int count=0;
    int maxi=0;
    int times=0;
    int i=0;
    int j=0;
    while(i<n && j<n){
        if(entry[i]<exits[j]){
            count++;
            if(count>maxi){
                maxi=count;
                times=entry[i];
            }
            i++;
        }
        else if(entry[i]==exits[j]){
            count++;
            if(count>maxi){
                maxi=count;
                times=entry[i];
            }
            i++;
            j++;
        }
        else if(entry[i]>exits[j]){
            i++;
            j++;
        }
        else{
            
        }
    }
    cout<<maxi<<" "<<times;
    
}
int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int* entry=new int[n];
	    int* exits=new int[n];
	    for(int i=0;i<n;i++){
	        cin>>entry[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>exits[i];
	    }
	    func(entry,exits,n);
	    cout<<endl;
	    delete[] entry;
	    delete[] exits;
	}
	return 0;
}
