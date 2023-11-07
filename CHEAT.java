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
	    int T = sc.nextInt();
		while(T-->0){
		    int ans = 0;
		    int N = sc.nextInt();
		    if(N<2){
		        System.out.println("0");
		    }
		    else{
		        for(int i=2;i<=N;i+=7){
		            ans++;
		        }
		       System.out.println(ans);
		    }
		}
	}
}
