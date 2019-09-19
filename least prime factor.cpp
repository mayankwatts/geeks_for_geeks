using namespace std;
int main()
 {
     int i,j,k,l;
     cin>>l;
     while(l--)
     {
         cin>>j;
            for(i=1;i<=j;i++)
            {
                if(i==1)
                {
                    cout<<i<<" ";
                }
                    if(i>1)
                    {
                        int n=1;
                        for(k=2;k<=i;k++)
                        {
                            
                            if(i%k==0 && n==1)
                            {
                                cout<<k<<" ";
                                n++;
                            }
                            
                        }
                    }
                
            }
            cout<<endl;
     }
	//code
	return 0;
}
