#include<iostream>
using namespace std;
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans=-1;
        for(int i=(s.length()-1);i>=0;i--)
        {
            if(s[i]-'1'==0)
            {
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
     
	//code
	return 0;
}
