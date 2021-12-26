Link->
https://www.codechef.com/CCSTART2/problems/TRIVALCH
Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(),v.end(),greater<int>());
    if(v[1]+v[2]>v[0])
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
	
	return 0;
}
