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
	    int l=sc.nextInt();
	    int b=sc.nextInt();
	    int area=l*b;
	    int perimeter=2*(l+b);
	    if(area>perimeter)
	    {
	        System.out.println("Area");
	        System.out.println(area);
	    }
	    else if(area<perimeter)
	    {
	        System.out.println("Peri");
	        System.out.println(perimeter);
	    }
	    else
	    {
	        System.out.println("Eq");
	        System.out.println(area);
	    }
		
	}
}
