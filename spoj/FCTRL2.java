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
		BigInteger[] facts = new BigInteger[101];
		
		int t;
		int n,i;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt();
		facts[0] = new BigInteger("1");
		for(i=1;i<=100;++i)
		{
			facts[i] = new BigInteger(facts[i-1].multiply(new BigInteger(""+i)).toString());
		}
		while(t-->0)
		{
			n = sc.nextInt();
			System.out.println(facts[n].toString());
		}
	}
}
