 #include<iostream>
 int main()
 {
     int i,j,t,l,k,n;
     cin>>t;
     while(t--)
     {
         l=0;
         n=0;
         cin>>i>>j>>k;
         while(k>1)
         {
             if(i>1)
             {
                if(i%k==0)
                 {
                    i--;
                    l++;
                 }
             }
             if(j>1)
             {
                if(j%k==0)
                {
                    j--;
                    n++;
                }
             }
             
                if(i%k!=0 || j%k!=0)
                {
                    k--;
                 }
            }
         cout<<l<<" "<<n<<endl;
     }
	//code
	return 0;
}
