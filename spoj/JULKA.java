/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		BigInteger a,b;
		Scanner sc = new Scanner(System.in);
		int i;
		for(i=0;i<10;++i)
		{
			a = new BigInteger(sc.nextLine());
			b = new BigInteger(sc.nextLine());
			System.out.println(a.add(b).divide(new BigInteger("2")).toString());
			System.out.println(a.subtract(b).divide(new BigInteger("2")).toString());
			//System.out.println(a.toString()+"\n"+b.toString());
		}
	}
}
