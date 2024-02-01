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
		    int n=sc.nextInt();
		    int count=0;
		   while(n>50 || n<50)
		    {
		        if(n>50)
		        {
		            n-=3;
		            count++;
		        }
		        if(n<50)
		        {
		            n+=2;
		            count++;
		        }
		    }
		    System.out.println(count);
		}

	}
}
