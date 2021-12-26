Link:
https://www.codechef.com/CCSTART2/problems/FINDMELI
Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a;
	cin>>n>>a;
	vector<int>v;
	while(n--)
	{
	    int input;
	    cin>>input;
	    v.push_back(input);
	    
	}
	if(count(v.begin(),v.end(),a))
	{
	   cout<<1<<endl;
	}
	else
	{
	   cout<<-1<<endl;
	}
	return 0;
}
