import java.util.*;
import java.lang.*;
import java.io.*;

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
	        if(a>0 && b>0)
	        {
	            System.out.println("Solution");
	        }
	        else if(b==0)
	        {
	            System.out.println("Solid");
	        }
	        else if(a==0)
	        {
	            System.out.println("Liquid");
	        }
	    }
	}
}
