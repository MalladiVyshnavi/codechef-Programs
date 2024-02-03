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
		    double x1=sc.nextDouble();
		    double x2=sc.nextDouble();
		    double x3=sc.nextDouble();
		    double v1=sc.nextDouble();
		    double v2=sc.nextDouble();
		    double a=(x3-x1)/v1;
		    double b=(x2-x3)/v2;
		    if(a>b)
		    {
		        System.out.println("Kefa");
		    }
		    else if(a<b)
		    {
		        System.out.println("Chef");
		    }
		    else
		    {
		        System.out.println("Draw");
		    }
		}

	}
}
