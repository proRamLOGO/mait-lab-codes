import java.io.*;
import java.lang.*;

public class P8_nPrimes {
	public static void main( String[] args ){
		int n = Integer.parseInt(args[0]); 
		System.out.println("First "+n+" Prime Numbers");
		for ( int cnt=0, i = 2 ; cnt!=n ; ++i ) {
			boolean isPrime = true;
			for ( int j = 2 ; j*j <= i ; ++j ) {
				if ( i%j==0 ) {
					isPrime = false ;
				}
			}
			if (isPrime) {
				System.out.print(i+" ") ;
				++cnt ;
			}
		}
		System.out.println();
	}

}