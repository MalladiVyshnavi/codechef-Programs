import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner read = new Scanner(System.in);
		int t = read.nextInt();
		for(int i=0; i<t; i++){
		    int n = read.nextInt();
		    int count = 0;
		    for(int j=1; j<=n; j++){
		        if(n%j==0){
		            count = count + 1;
		        }
		    }
		    if(count == 2){
		        System.out.println("yes");
		    }
		    else{
		        System.out.println("no");
		    }
		}
	}
}
