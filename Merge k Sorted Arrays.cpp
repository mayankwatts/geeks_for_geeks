#include<bits/stdc++.h>
#define N 100
using namespace std;

int *mergeKArrays(int arr[][N],int k);

void printArray(int arr[], int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    int arr[N][N];
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	int *output = mergeKArrays(arr, k);
	printArray(output, k*k);
	cout<<endl;
}
	return 0;
}

int *mergeKArrays(int arr[][N], int k){
    int* ans=new int[k*k];
    int l=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            ans[l]=arr[i][j];
            l++;
        }
    }
    sort(ans,ans+(k*k));

return ans;
}
