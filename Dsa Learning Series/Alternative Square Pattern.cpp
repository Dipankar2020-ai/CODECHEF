You're given a number N. Print the first N lines of the below-given pattern.

1 2 3 4 5
10 9 8 7 6
11 12 13 14 15
20 19 18 17 16
21 22 23 24 25
30 29 28 27 26
Input:
First-line will contain the number N.
Output:
Print the first N lines of the given pattern.

Constraints
1≤N≤200
Sample Input 1:
4
Sample Output 1:
1 2 3 4 5
10 9 8 7 6
11 12 13 14 15
20 19 18 17 16
Sample Input 2:
2
Sample Output 2:
1 2 3 4 5
10 9 8 7 6
EXPLANATION:
In the first example, we'll print the first 4 lines of the given pattern.
Solution:
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int i=1,j,m=5,k,l=1;
     while(i<=n*5)
     {
         for(j=l;j<=m;j++)
         {
             cout<<j<<" ";
         }
         cout<<endl;
         m=m+5;
         l=m+1;
         for(k=m;k>=j;k--)
         {
             cout<<k<<" ";
         }
         cout<<endl;
         m=m+5;
         i=m;
         
         
     }
}
