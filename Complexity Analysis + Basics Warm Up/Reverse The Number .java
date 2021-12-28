Link->
https://www.codechef.com/LRNDSA01/problems/FLOW007
Solution->
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	       Scanner sc=new Scanner(System.in);
	       
	       int t=sc.nextInt();
	       while(t!=0)
	       {
	       int n=sc.nextInt();
	       String ans="";
	       while(n!=0)
	       {
	           ans=ans+(n%10);
	           n=n/10;
	       }
	      System.out.println(Integer.parseInt(ans));
	      t--;
	       }
	    
	}
}
