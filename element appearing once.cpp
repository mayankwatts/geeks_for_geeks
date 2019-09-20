 #include<iostream.h>
 {
     int i,j,k,l,t,n;
     cin>>t;
     while(t--)
     {
         l=0;
         cin>>n;
         int *arr= new int[n+1];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         arr[n]=0;
         if(arr[0]!=arr[1])
         {
             cout<<arr[0];
         }
         for(i=1;i<n;i++)
         {
            if(arr[i-1]-arr[i]!=0 && arr[i]-arr[i+1]!=0)
            {
                cout<<arr[i];
            }
                
         }
         delete [] arr;
         cout<<endl;
     }
	//code
	return 0;
}
