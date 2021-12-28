Link->(Important)
https://www.codechef.com/LRNDSA01/problems/LAPIN
Solution->
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	bool flag=1;
	while(t--)
	{
	    string str;
	    cin>>str;
	    int length=str.length();
	    string first,second;
	    for(int i=0;i<length/2;i++)
	    {
	        first+=str[i];
	        second+=str[length-i-1];
	    }
	    sort(first.begin(),first.end());
	    sort(second.begin(),second.end());
	    if(first==second)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
