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
		  int l=sc.nextInt();
		  int r=sc.nextInt();
		  int m=sc.nextInt();
		  int a=(m/l)+(m/r);
		  if(m%l!=0)
		  {
		      a++;
		  }
		  System.out.println(a);
		  
		}

	}
}
