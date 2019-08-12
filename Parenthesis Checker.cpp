#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    stack<char> s;
	    int i=0;
	    while(str[i]!='\0'){
	        if(s.empty()){
	            s.push(str[i]);
	        }
	        else if((str[i]=='}' && s.top()=='{') || (str[i]==')' && s.top()=='(') || (str[i]==']' && s.top()=='[')){
	            s.pop();
	        }
	        else{
	            s.push(str[i]);
	        }
	        i++;
	    }
	    if(s.empty()){
	        cout<<"balanced"<<endl;
	    }
	    else{
	        cout<<"not balanced"<<endl;
	    }
	    
	}
	return 0;
}
