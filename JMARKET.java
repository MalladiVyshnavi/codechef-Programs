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
		while(t-->0)
		{
		    int x=sc.nextInt();
		int[] arr=new int[3];
		for(int i=0;i<arr.length;i++)
		{
		    arr[i]=sc.nextInt();
		}
		Arrays.sort(arr);
		System.out.println(arr[0]*(x-1)+arr[1]);
		    
		}
	
	}
}
