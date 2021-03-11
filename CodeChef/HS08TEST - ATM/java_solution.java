/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scanner = new Scanner(System.in);
		
		int cash;
		float balance;
		
		cash = scanner.nextInt();
		balance = scanner.nextFloat();
		
		if (cash % 5 == 0){
		  if (balance - 0.5 >= cash){
		    balance -= cash;
		    balance -= 0.50;
		  }
		}
		System.out.printf("%.2f", balance);
	}
}
