/* package codechef; // don't place package name! */

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
	   for(int i=0;i<t;i++)
	   {
	       int a=sc.nextInt();
	       int b=sc.nextInt();
	       int c=sc.nextInt();
	       if((a*b)%c==0)
	       {
	           System.out.println((a*b)+" "+c);
	       }
	       else if((b*c)%a==0)
	       {
	           System.out.println((b*c)+" "+a);
	       }
	       else if((a*c)%b==0)
	       {
	           System.out.println((a*c)+" "+b);
	       }
	       else{
	           System.out.println(-1);
	       }
	   }
	}
}
