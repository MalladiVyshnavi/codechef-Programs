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
		char ch=sc.next().charAt(0);
		if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		{
		    System.out.println("Vowel");
		}
		else
		{
		    System.out.println("Consonant");
		}
	}
}
