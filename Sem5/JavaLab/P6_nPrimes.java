import java.io.*;
import java.util.*;
import java.lang.*;

public class P6_nPrimes {

	public static void main( String[] args ){


		int n = 10; 
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