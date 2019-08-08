#include<bits/stdc++.h>
using namespace std;
void func(int arr[],int n){
    int min=-1;
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(flag==0){
            if(arr[i]<arr[i+1]){
                flag=1;
                min=i;
                continue;
            }
        }
        if(flag==1){
            if(arr[i]>arr[i+1]){
                flag=0;
                cout<<"("<<min<<" "<<i<<")"<<" ";
            }
        }
    }
    if(flag==1){
        cout<<"("<<min<<" "<<n-1<<")"<<" ";
    }
    if(min==-1){
        cout<<"No Profit";
    }
    cout<<endl;
}
int main()
 {
     int t,n;
     cin>>t;
     while(t--){
         cin>>n;
         int* arr=new int[n];
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
         func(arr,n);
         delete[] arr;
     }
	//code
	return 0;
}
