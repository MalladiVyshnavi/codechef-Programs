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
		    int bs = sc.nextInt();
		    if(bs<1500){
		        System.out.println(bs + (0.1*bs) + (0.9*bs));
		    }
		    else{
		        System.out.println(bs + (0.98*bs) + 500);
		    }
		}
	}
}
