Link->
https://www.codechef.com/LRNDSA01/problems/FCTRL
Solution->
#include <iostream>
using namespace std;

int main() {
     long long int t;
     cin>>t;
     while(t--)
     {
         long long int  n;
         cin>>n;
        long long int res=0;
         for(int i=5;i<=n;i=i*5)
         {
             res=res+n/i;
         }
         cout<<res<<endl;
     }
	return 0;
}
