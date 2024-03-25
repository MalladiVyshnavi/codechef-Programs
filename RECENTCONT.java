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
		    int countone=0;
		    int counttwo=0;
		    for(int j=0;j<n;j++)
		    {
		        String m=sc.next();
		        if(m.equals("START38"))
		        {
		            countone++;
		        }
		        else
		        {
		            counttwo++;
		        }
		    }
		    System.out.println(countone+" "+counttwo);
		}

	}
}
