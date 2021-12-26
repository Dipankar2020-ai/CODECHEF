Link:
https://www.codechef.com/CCSTART2/problems/REVMEE
Solution:
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	 int n;
	  vector<int>v;
	 cin>>n;
	 while(n--)
	 {
	     int input;
	     cin>>input;
	     v.push_back(input);
	 }
	 
	 for(int i=v.size()-1;i>=0;i--)
	 {
	     cout<<v[i]<<" ";
	 }
