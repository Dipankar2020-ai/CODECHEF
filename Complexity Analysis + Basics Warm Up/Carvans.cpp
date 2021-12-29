Link->
https://www.codechef.com/LRNDSA01/problems/CARVANS
Solution:
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int count=1;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    if(n==1)
	    {
	        cout<<"1"<<endl;
	    }
	    else
	    { int min=arr[0];
	        
	        for(int i=1;i<n;i++)
	        {
	            if(arr[i]<=min)
	            {
	                min=arr[i];
	                count++;
	            }
	        }
	        cout<<count<<endl;
	    }
	}
	return 0;
}
