/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	     Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int i=0;i<t;i++)
		{
		    int x = sc.nextInt();
		    int y = sc.nextInt();
		    int k = (500-(2*x)) + (1000-(4*(x+y)));
		    int l = (500-(2*(x+y))) + (1000-(4*y));
		    if(k>=l)
		    {
		     
		       System.out.println(k);
		    }
		    else
		    {
		       System.out.println(l);
		    }
		}
	}
}
