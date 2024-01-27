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
	        double a=sc.nextDouble();
	        double b=sc.nextDouble();
	        double x=sc.nextDouble();
	        double y=sc.nextDouble();
	        double chef=a/x;
	        double chefina=b/y;
	        if(chef<chefina)
	        {
	            System.out.println("Chef");
	        }
	        else if(chef>chefina)
	        {
	            System.out.println("Chefina");
	        }
	        else
	        {
	            System.out.println("Both");
	        }
	    }
	}
}
