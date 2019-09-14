 {
     int i,j,k,l,t;
     cin>>t;
     while(t--)
     {
         cin>>k;
         int *arr= new int[k];
         for(i=0;i<k;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<2;i++)
         {
             for(j=i+1;j<k;j++)
             {
                 if(arr[i]<arr[j])
                 {
                     l=arr[i];
                     arr[i]=arr[j];
                     arr[j]=l;
                 }
             }
         }
         cout<<arr[1]<<endl;
         delete [] arr;
     }
	//code
	return 0;
}
