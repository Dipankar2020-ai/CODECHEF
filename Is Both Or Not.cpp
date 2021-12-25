Link:
https://www.codechef.com/CCSTART2/problems/ISBOTH
Problem:
You're given a number N. If N is divisible by 5 or 11 but not both then print "ONE"(without quotes). If N is divisible by both 5 and 11 then print "BOTH"(without quotes). If N is not divisible by 5 or 11 then print "NONE"(without quotes).

Input:
First-line will contain the number N.
Output:
Print the answer in a newline.

Constraints
1≤N≤103
Sample Input 1:
50
Sample Output 1:
ONE
Sample Input 2:
110
Sample Output 2:
BOTH
Sample Input 2:
16
Sample Output 2:
NONE
Solution:

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
     if(n%5!=0 && n%11!=0)
    {
        cout<<"NONE"<<endl;
    
    }
   
   else if(n%5==0 && n%11==0)
    {
        cout<<"BOTH"<<endl;
        
    }
    else
    {
        cout<<"ONE"<<endl;
        
    }
   
   

    return 0;
}
