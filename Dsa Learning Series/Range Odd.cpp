Link->
https://www.codechef.com/CCSTART2/problems/RNGEODD
Solution:
#include <iostream>
using namespace std;

int main() {
	int l,r,i;
	cin>>l>>r;
	for(i=l;i<=r;i++)
	{
	    if(i%2==1)
	    {
	        cout<<i<<" ";
	    }
	}
	return 0;
}
