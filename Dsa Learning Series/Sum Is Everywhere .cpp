Link:
https://www.codechef.com/CCSTART2/problems/SUMEVOD
Solution:
#include <iostream>
using namespace std;

int main() {
	long long n;
	cin>>n;
	long long count1=1;
	long long count2=1;
	long long i=1;
	long long j=1;
	long long sum1=0,sum2=0;
	while(count1<=n)
	{
	    if(i%2==1)
	    {
	        sum1=sum1+i;
	        count1++;
	    }
	    i++;
	    
	}
	while(count2<=n)
	{
	    if(j%2==0)
	    {
	        sum2=sum2+j;
	        count2++;
	    }
	    j++;
	    
	}
	
	cout<<sum1<<" "<<sum2<<endl;
	
	return 0;
}
