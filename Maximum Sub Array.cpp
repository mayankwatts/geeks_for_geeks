using namespace std;
void func(int* arr,int n){
    int max=0;
    int* dp=new int[n];
    dp[0]=arr[0];
    for(int i=1;i<n;i++){
        if((arr[i]>=0 && dp[i-1]>=0) || (arr[i]<0 && dp[i-1]<0)){
            dp[i]=arr[i]+dp[i-1];
        }
        else if((arr[i]>=0 && dp[i-1]<0) || (arr[i]<0 && dp[i-1]>=0)){
            dp[i]=arr[i];
        }
        else{
    
        }
        if(dp[i]>max){
            max=dp[i];
        }
    }
    int first=-1;
    int last=-1;
    int a=-1;
    int b=-1;
    for(int i=0;i<n;i++){
        if(dp[i]>=0 && a==-1 && dp[i]!=max){
            a=i;
            b=i;
        }
        else if(dp[i]<0){
            a=-1;
            b=-1;
        }
        else if(dp[i]==max){
            if(a==-1){
                a=i;
                b=i;
            }
            while(i<n){
                if(dp[i]==max){
                    i++;
                }
                else{
                    break;
                }
            }
            i--;
            b=i;
            if(first==-1 && last==-1){
                first=a;
                last=b;
            }
            else{
                if(b-a>last-first){
                    first=a;
                    last=b;
                }
            }
            
        }
    }
    for(int i=first;i<=last;i++){
        cout<<arr[i]<<" ";
    } 
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int* arr=new int[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    func(arr,n);
	    cout<<endl;
	    delete[] arr;
	}
	return 0;
}
