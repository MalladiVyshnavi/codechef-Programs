import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        while(t-- >0){
            double n=in.nextInt();
          
            
              double  first=(double)Math.ceil(n/2);
            
            System.out.println((int)first+" "+(int)n);
        }

	}
}
