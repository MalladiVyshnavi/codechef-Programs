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
		    int w=sc.nextInt();
		    int x=sc.nextInt();
		    int y=sc.nextInt();
		    int z=sc.nextInt();
		    if(x==w || y==w || z==w || (x+y)==w || (y+z)==w || (z+x)==w || (x+y+z)==w)
		    {
		        System.out.println("YES");
		    }
		    else
		    {
		        System.out.println("NO");
		    }
		}

	}
}
