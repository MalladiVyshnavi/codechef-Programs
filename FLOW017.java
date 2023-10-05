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
		while(t-->0){
		    int x=sc.nextInt();
		    int y=sc.nextInt();
		    int z=sc.nextInt();
		    if(x>y && x>z){
		        System.out.println(Math.min(x,Math.max(y,z)));
		    }
		    else if(y>x && y>z){
		        System.out.println(Math.min(y,Math.max(x,z)));
		    }
		    else{
		        System.out.println(Math.min(z,Math.max(x,y)));
		    }
		}
	}
}
