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
		   String s=sc.next();
		   int c=0;
		   for(int j=0;j<s.length();j++)
		   {
		       if(s.charAt(j)=='4')
		       {
		           c++;
		       }
		   }
		   System.out.println(c);
		    
		}
		

	}
}
