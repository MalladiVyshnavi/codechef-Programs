import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int a=sc.nextInt();
		int b=sc.nextInt();
	    String c=sc.next();
	    if(c.equals("+"))
	    {
	        System.out.println(a+b);
	    }
	    else if(c.equals("-"))
	    {
	        System.out.println(a-b);
	    }
	    else if(c.equals("*"))
	    {
	        System.out.println(a*b);
	    }
	    else 
	    {
	        System.out.println(1.0*a/b);
	    }
	    
		

	}
}
