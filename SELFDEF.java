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
		    int arr[]=new int[n];
		    for(int j=0;j<n;j++)
		    {
		        arr[j]=sc.nextInt();
		    }
		    int c=0;
		    for(int j=0;j<n;j++)
		    {
		        if(arr[j]>=10 && arr[j]<=60)
		        {
		            c++;
		        }
		    }
		    System.out.println(c);
		}

	}
}
