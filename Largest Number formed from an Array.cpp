#include<bits/stdc++.h>
using namespace std;
void func(int arr[],int n){
    int max=0;
    int* index=new int[n];
    for(int i=0;i<n;i++){
        int a=arr[i];
        int count=0;
        while(a!=0){
            a=a/10;
            count++;
        }
        if(count>max){
            max=count;
        }
        index[i]=count;
    }
    int* temp=new int[n];
    for(int i=0;i<n;i++){
        int a=index[i]-1;
        int b=arr[i];
        while(a){
            b=b/10;
            a--;
        }
        int c=max-index[i];
        temp[i]=arr[i]*pow(10,c);
        int d=0;
        while(c){
           d=d+(b*pow(10,c-1));
           c--;
        }
        temp[i]+=d;
    }
    for(int i=0;i<n;i++){
        int ma=-1;
        int in=-1;
        for(int i=0;i<n;i++){
            if(temp[i]==ma){
                int a=0;
                if(index[i]>index[in]){
                    a=ma/(pow(10,max-index[in]));
                    if(a%10<ma%10){
                        in=i;
                    }
                }
                if(index[i]<index[in]){
                    a=temp[i]/(pow(10,max-index[i]));
                    if(a%10>ma%10){
                        in=i;
                    }
                    
                }
                
            }
            if(temp[i]>ma && temp[i]!=-1){
                ma=temp[i];
                in=i;
            }
            
        }
        int a=max-index[in];
        int b=pow(10,a);
        cout<<temp[in]/b;
        temp[in]=-2;
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
	return 0;
}
